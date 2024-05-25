#pragma once

#include <QApplication>
#include <thread>

#include "monitor_widget.h"

#include "../../proto/build/monitor_info.pb.h"
#include <iostream>
#include "../../mprpc/include/mprpcapplication.h"
#include "../../mprpc/include/mprpcchannel.h"

int main(int argc, char* argv[]) {
  QApplication app(argc, argv);

  monitor::MonitorWidget moitor_widget;

  MprpcApplication::Init(argc, argv);

  monitor::proto::GrpcManager_Stub stub(new MprpcChannel());
  
  monitor::proto::MonitorInfo monitor_info;

  monitor::proto::GetRequest request;

  MprpcController controller;

  std::string name = monitor_info.name();

  QWidget* widget = moitor_widget.ShowAllMonitorWidget(name);
  widget->show();

  std::unique_ptr<std::thread> thread_;
  thread_ = std::make_unique<std::thread>([&]() {
    while (true) {
      monitor_info.Clear();
      request.Clear();

      request.set_get("开始获取数据");

      stub.GetMonitorInfo(&controller, &request, &monitor_info, nullptr);
      if (controller.Failed())
      {
          std::cout <<"获取数据失败"<<std::endl;
          std::cout << controller.ErrorText() << std::endl;
      }
      else{
        
          std::cout <<"开始更新数据"<<std::endl;
          moitor_widget.UpdateData(monitor_info);
          std::cout <<"更新数据成功"<<std::endl;

          std::this_thread::sleep_for(std::chrono::seconds(2));
      }       
      
    }
  });
  thread_->detach();

  return app.exec();
}