#include "mprpcchannel.h"
#include "logger.h"
#include "mprpcapplication.h"
#include "mprpccontroller.h"
#include "rpcheader.pb.h"
#include "zookeeperutil.h"
#include <arpa/inet.h>
#include <errno.h>
#include <netinet/in.h>
#include <string>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
/*
header_size + service_name method_name args_size + args
*/
// 所有通过stub代理对象调用的rpc方法，都走到这里了，统一做rpc方法调用的数据数据序列化和网络发送
void MprpcChannel::CallMethod(const google::protobuf::MethodDescriptor *method,
                              google::protobuf::RpcController *controller,
                              const google::protobuf::Message *request,
                              google::protobuf::Message *response,
                              google::protobuf::Closure *done) {
  const google::protobuf::ServiceDescriptor *sd = method->service();
  std::string service_name = sd->name();    // service_name
  std::string method_name = method->name(); // method_name

  // 获取参数的序列化字符串长度 args_size
  uint32_t args_size = 0;
  std::string args_str;
  if (request->SerializeToString(&args_str)) {
    args_size = args_str.size();
  } else {
    controller->SetFailed("serialize request error!");
    return;
  }

  // 定义rpc的请求header
  mprpc::RpcHeader rpcHeader;
  rpcHeader.set_service_name(service_name);
  rpcHeader.set_method_name(method_name);
  rpcHeader.set_args_size(args_size);

  uint32_t header_size = 0;
  std::string rpc_header_str;
  if (rpcHeader.SerializeToString(&rpc_header_str)) {
    header_size = rpc_header_str.size();
  } else {

    controller->SetFailed("serialize rpc header error!");
    return;
  }

  // 组织待发送的rpc请求的字符串
  std::string send_rpc_str;
  send_rpc_str.insert(0, std::string((char *)&header_size, 4)); // header_size
  send_rpc_str += rpc_header_str;                               // rpcheader
  send_rpc_str += args_str;                                     // args

  // 打印调试信息
  LOG_INFO("================Consumer Start============================");
  LOG_INFO("header_size: %d", header_size);
  LOG_INFO("header_size: %s", rpc_header_str.c_str());
  LOG_INFO("service_name: %s", service_name.c_str());
  LOG_INFO("method_name: %s", method_name.c_str());
  // LOG_INFO("args_str: %s", args_str.c_str());
  LOG_INFO("================Consumer  End ============================");

  std::cout << "============================================" << std::endl;
  std::cout << "header_size: " << header_size << std::endl;
  std::cout << "rpc_header_str: " << rpc_header_str << std::endl;
  std::cout << "service_name: " << service_name << std::endl;
  std::cout << "method_name: " << method_name << std::endl;
  std::cout << "args_str: " << args_str << std::endl;
  std::cout << "============================================" << std::endl;

  // 使用tcp编程，完成rpc方法的远程调用
  int clientfd = socket(AF_INET, SOCK_STREAM, 0);
  // 设置套接字选项
  int optval = 1;
  if (setsockopt(clientfd, SOL_SOCKET, SO_REUSEADDR, &optval, sizeof(optval)) <
      0) {
    perror("setsockopt");
    close(clientfd);
    return;
  }
  if (-1 == clientfd) {
    char errtxt[512] = {0};
    sprintf(errtxt, "create socket error! errno:%d", errno);

    controller->SetFailed(errtxt);
    return;
  }

  // 读取配置文件rpcserver的信息
  // std::string ip =
  // MprpcApplication::GetInstance().GetConfig().Load("rpcserverip"); uint16_t
  // port =
  // atoi(MprpcApplication::GetInstance().GetConfig().Load("rpcserverport").c_str());
  // rpc调用方想调用service_name的method_name服务，需要查询zk上该服务所在的host信息
  ZkClient zkCli;
  zkCli.Start();
  //  /UserServiceRpc/Login
  std::string method_path = "/" + service_name + "/" + method_name;
  // 127.0.0.1:8000
  std::string host_data = zkCli.GetData(method_path.c_str());
  if (host_data == "") {
    controller->SetFailed(method_path + " is not exist!");
    return;
  }
  int idx = host_data.find(":");
  if (idx == -1) {
    controller->SetFailed(method_path + " address is invalid!");
    return;
  }
  std::string ip = host_data.substr(0, idx);
  uint16_t port =
      atoi(host_data.substr(idx + 1, host_data.size() - idx).c_str());

  struct sockaddr_in server_addr;
  server_addr.sin_family = AF_INET;
  server_addr.sin_port = htons(port);
  server_addr.sin_addr.s_addr = inet_addr(ip.c_str());

  LOG_INFO("Consumer开始连接RPC服务节点");
  // 检查 clientfd 是否有效
  if (clientfd < 0) {
    LOG_ERR("Invalid clientfd");
    return; // 返回，避免继续执行导致错误
  }

  //检查 controller 是否为 NULL
  if (!controller) {
    LOG_ERR("controller 未初始化");
    return; // 返回，避免继续执行导致错误
  }

  // 检查 server_addr 内容是否合法
  if (server_addr.sin_family != AF_INET) {
    LOG_ERR("server_addr 内容不合法");
    return; // 返回，避免继续执行导致错误
  }

  // 连接rpc服务节点
  LOG_INFO("connect clientfd: %d", clientfd);

  if (-1 ==
      connect(clientfd, (struct sockaddr *)&server_addr, sizeof(server_addr))) {
    close(clientfd);
    char errtxt[512] = {0};
    sprintf(errtxt, "connect error! errno:%d", errno);
    LOG_ERR("Connect error: %s", strerror(errno));
    controller->SetFailed(errtxt);
    return;
  }
  LOG_INFO("Consumer开始发送RPC请求");

  // 发送rpc请求
  // 发送rpc请求
  ssize_t sent_bytes =
      send(clientfd, send_rpc_str.c_str(), send_rpc_str.size(), 0);
  if (sent_bytes < 0) {
    close(clientfd);
    LOG_ERR("Send error: %s", strerror(errno));
    return;
  }
  LOG_INFO("Consumer开始接收RPC请求的数据");
  // 接收rpc请求的响应值
  char recv_buf[10240] = {0};
  int recv_size = 0;
  if (-1 == (recv_size = recv(clientfd, recv_buf, 4096, 0))) {
    close(clientfd);
    char errtxt[512] = {0};
    sprintf(errtxt, "recv error! errno:%d", errno);
    controller->SetFailed(errtxt);
    return;
  }

  // 反序列化rpc调用的响应数据
  // std::string response_str(recv_buf, 0, recv_size); //
  // bug出现问题，recv_buf中遇到\0后面的数据就存不下来了，导致反序列化失败 if
  // (!response->ParseFromString(response_str))

  LOG_INFO("Consumer开始反序列化请求到的数据");

  int exit = 0;
  if (method_name == "SetMonitorInfo") {

    if (!response->ParseFromArray(recv_buf, recv_size)) {
      close(clientfd);
      char errtxt[512] = {0};
      sprintf(errtxt, "SetMonitorInfo parse error! response_str:%s", recv_buf);
      controller->SetFailed(errtxt);
      return;
    }
  }

  if (method_name == "GetMonitorInfo") {
    std::cout << "正在 GetMonitorInfo parse !" << std::endl;

    if (!response->ParseFromArray(recv_buf, recv_size)) {
      close(clientfd);
      char errtxt[512] = {0};
      sprintf(errtxt, "GetMonitorInfo parse error! response_str:%s", recv_buf);
      controller->SetFailed(errtxt);
      return;
    } else {
      std::cout << "GetMonitorInfo parse 成功!" << std::endl;
    }
  }

  close(clientfd);
  LOG_INFO("关闭clientfd: %d", clientfd);
}