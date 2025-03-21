#pragma once
#include <memory>
#include <thread>
#include <vector>


#include "monitor/cpu_load_monitor.h"
#include "monitor/cpu_softirq_monitor.h"
#include "monitor/cpu_stat_monitor.h"
#include "monitor/mem_monitor.h"
#include "monitor/monitor_inter.h"
#include "monitor/net_monitor.h"

#include "../../proto/build/monitor_info.pb.h"
#include <iostream>
#include "../../mprpc/include/mprpcapplication.h"
#include "../../mprpc/include/mprpcchannel.h"


int main(int argc, char **argv) {

  MprpcApplication::Init(argc, argv);

  monitor::proto::GrpcManager_Stub stub(new MprpcChannel());
  
  monitor::proto::SetResponse response;
  
  MprpcController controller;

  std::vector<std::shared_ptr<monitor::MonitorInter>> runners_;
  runners_.emplace_back(new monitor::CpuSoftIrqMonitor());
  runners_.emplace_back(new monitor::CpuLoadMonitor());
  runners_.emplace_back(new monitor::CpuStatMonitor());
  runners_.emplace_back(new monitor::MemMonitor());
  runners_.emplace_back(new monitor::NetMonitor());

  
  char *name = getenv("USER");
  std::unique_ptr<std::thread> thread_ = nullptr;
  thread_ = std::make_unique<std::thread>([&]() {
    while (true) {
      monitor::proto::MonitorInfo monitor_info;
      monitor_info.set_name(std::string(name));
      for (auto& runner : runners_) {
        runner->UpdateOnce(&monitor_info);
      }
      std::cout<<"start set"<<std::endl;

      stub.SetMonitorInfo(&controller, &monitor_info, &response, nullptr);
      ////RpcChannel->RpcChannel::callMethod 集中来做所有rpc方法调用的参数序列化和网络发送

      if (controller.Failed())
      {
          std::cout << controller.ErrorText() << std::endl;
      }
      else{
          // 一次rpc调用完成，读调用的结果
          if (0 == response.result().errcode())
          {
              std::cout << "rpc set response success:" << response.sucess() << std::endl;
          }
          else
          {
              std::cout << "rpc set response error : " << response.result().errmsg() << std::endl;
          }
      }    
      std::this_thread::sleep_for(std::chrono::seconds(3));
    }
  });

  thread_->join();
  return 0;
}
