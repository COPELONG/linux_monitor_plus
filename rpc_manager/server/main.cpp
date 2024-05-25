#include <iostream>
#include <string>
#include "../../proto/build/monitor_info.pb.h"
#include "../../mprpc/include/mprpcapplication.h"
#include "../../mprpc/include/rpcprovider.h"
#include "../../mprpc/include/logger.h"


class MontiorService :public monitor::proto::GrpcManager{

public:

  void SetMonitorInfo(::google::protobuf::RpcController* controller,
                       const ::monitor::proto::MonitorInfo* request,
                       ::monitor::proto::SetResponse* response,
                       ::google::protobuf::Closure* done){

                    monitor_infos_.Clear();
                    monitor_infos_ = *request;
                    std::cout << "jinru" << request->soft_irq_size() << std::endl;
                            // 把响应写入  包括错误码、错误消息、返回值
                    monitor::proto::ResultCode *code = response->mutable_result();
                    code->set_errcode(0);
                    code->set_errmsg("no err");
                    response->set_sucess(true);

                    // 执行回调操作   执行响应对象数据的序列化和网络发送（都是由框架来完成的）
                    done->Run();

                       }
  void GetMonitorInfo(::google::protobuf::RpcController* controller,
                       const ::monitor::proto::GetRequest* request,
                       ::monitor::proto::MonitorInfo* response,
                       ::google::protobuf::Closure* done){


                        std::cout<<request->get()<<std::endl;

                        *response = monitor_infos_;

                        done->Run();


                       }
private:
  monitor::proto::MonitorInfo monitor_infos_;                      

};

int main(int argc, char **argv)
{
    // 调用框架的初始化操作
    MprpcApplication::Init(argc, argv);

    // provider是一个rpc网络服务对象。把UserService对象发布到rpc节点上
    RpcProvider provider;
    provider.NotifyService(new MontiorService());

    // 启动一个rpc服务发布节点   Run以后，进程进入阻塞状态，等待远程的rpc调用请求
    provider.Run();

    return 0;
}