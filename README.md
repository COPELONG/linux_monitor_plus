# linux_monitor_plus
linux分布式监控

## 技术栈

C++、Protobuf、CMake、Docker、Zookeeper、RPC、Qt、Shell 脚本、网络编程等。

## 模块划分

### Docker

用于部署项目所需的环境依赖，包括编译Zookeeper源码和安装Protobuf等。Docker容器化技术确保了环境的一致性和易于分发。

### Net

使用C++11编写的多Reactor多线程网络模型，提供高效的RPC交互与连接。该模块采用one loop per thread` + `non-blocking IO设计思想。

### MPRPC

基于Protobuf协议的高性能RPC框架。MPRPC通过高效的序列化和反序列化机制，确保了远程过程调用的低延迟和高吞吐量。

### Test Monitor

用于监控Linux系统的各种性能指标，包括CPU负载、网络流量、内存使用等。Test Monitor模块通过采集系统数据，为系统性能分析和优化提供依据。

### Display Monitor

通过Qt框架将Test Monitor模块采集的数据进行可视化展示。Display Monitor提供直观的图形界面，便于用户实时监控和分析系统状态。

### Proto

使用Protobuf数据格式封装监控数据，确保数据传输的高效和可靠。Proto模块定义了数据结构，作为监控数据在各模块之间传递的基础。

## 项目亮点：

### 分布式架构

1. **Zookeeper 集成**: 项目采用Zookeeper进行分布式协调和服务注册发现。Zookeeper确保了各服务实例的一致性、可用性和可靠性，简化了分布式系统的管理和维护。

2. **高性能RPC框架**: 

   *该框架实现了同一台机器的不同进程之间或不同机器之间的服务调用。它适用于将**单体**架构系统拆分为基于**分布式微服务调用**的部署，通过将高并发性能要求的**微服务部署多份**来提升系统整体**并发**性能，并具有模块服务**独立升级**和服务间**解耦**的优势。

   *基于C++ 11重构的muduo网络库实现高并发网络通信模块，作为RPC远程调用的基础。

   *基于生产者消费者模型，设计了线程安全的缓冲队列，实现了异步工作方式的日志模块。

### 高性能网络模块

1. **多Reactor多线程模型**: 网络模块采用C++11重构的多Reactor多线程网络模型，仿照著名的Muduo库设计。该模型通过多个Reactor实现高效的事件分发和处理，充分利用多核CPU的并发能力，提高了网络IO的处理效率，通过精细化的事件循环和任务调度，确保了高并发场景下的稳定性和性能，不用依赖boost库就可以实现主要功能。。

2. `EventLoop`中使用了`eventfd`来调用`wakeup()`，让`mainloop`唤醒`subloop`的`epoll_wait`阻塞，`eventfd()` 用于实现线程间的事件通知机制，其中一个线程通过写入 eventfd 来触发事件，另一个线程通过读取 eventfd 来等待事件的发生。这种方式通常比传统的基于条件变量或管道的方式更高效。

3. 在`Thread`中通过`C++lambda`表达式以及信号量机制保证线程创建时的有序性，只有当线程获取到了其自己的`tid`后，才算启动线程完毕

4. `TcpConnection`继承自`enable_shared_from_this`，`TcpConnection`对象可以调用`shared_from_this()`方法给其内部回调函数，相当于创建了一个带引用计数的`shared_ptr`，同时`muduo`通过`tie()`方式解决了`TcpConnection`对象生命周期先于`Channel`结束的情况。

   

### 系统监控与可视化

1. **系统监控**: Test Monitor模块实时监控Linux系统的各项性能指标，包括CPU负载、网络流量、内存使用等。通过对系统资源的监控，帮助用户及时发现和解决性能瓶颈和潜在问题。
2. **数据可视化**: Display Monitor模块使用Qt框架将监控数据进行可视化展示。提供直观的图形界面，使用户能够方便地查看和分析系统状态，提升运维效率和用户体验。

### 容器化部署

1. **Docker环境**: 项目采用Docker容器化技术，确保了开发、测试和生产环境的一致性。通过Docker，可以轻松部署和分发项目，简化环境配置和依赖管理，提高开发和运维效率。

## 监控展示

![image-20240513173054192](https://my-figures.oss-cn-beijing.aliyuncs.com/Figures/image-20240513173054192.png)

![image-20240513173225219](https://my-figures.oss-cn-beijing.aliyuncs.com/Figures/image-20240513173225219.png)

![image-20240513173239839](https://my-figures.oss-cn-beijing.aliyuncs.com/Figures/image-20240513173239839.png)

![image-20240513173249706](https://my-figures.oss-cn-beijing.aliyuncs.com/Figures/image-20240513173249706.png)

## 运行步骤

### 运行脚本

```shell
cd docker/build
docker build --network host -f base.dockerfile .
docker images 
docker tag cdc64f890b6b linux:monitor

#启动zk服务
cd apache-zookeeper-3.9.2-bin/bin
sudo ./zkserver.sh start
```

### 进入容器

```shell
cd docker/scripts 
#启动容器
./monitor_docker_run.sh
#进入容器c'd
./monitor_docker_into.sh
```

### 配置ip

```shell
#bin/

# 提供rpc节点的ip地址
rpcserverip=127.0.0.1     
# rpc节点的port端口号
rpcserverport=8000
    
# 开启zk服务端的ip地址
zookeeperip=127.0.0.1    
# zk的port端口号
zookeeperport=2181

```

### 构建项目

```shell
cd work
sudo ./autobuild.sh
```

### 开启服务

对zookeeper注册节点服务，并开启服务器时刻准备接收客户端连接调用。

```shell
#成功进入docker容器后
cd work
cd bin
./server -i test.conf
```

![image-20240524170658018](https://my-figures.oss-cn-beijing.aliyuncs.com/Figures/image-20240524170658018.png)

### 开启监控程序

获取linux的cpu_load、mem等需要监控的参数设置set到rpc服务上，通过rpc调用，根据调用的方法，获取zk节点上的提供该函数服务的服务器ip和port。

然后连接服务端，进行set操作。

```shell
#成功进入docker容器后
cd work
cd bin
./monitor -i test.conf
```

![image-20240524170710774](https://my-figures.oss-cn-beijing.aliyuncs.com/Figures/image-20240524170710774.png)



### 开启QT服务

通过rpc调用，根据调用的get方法，获取zk节点上的提供该函数服务的服务器ip和port。

连接远端提供函数服务的服务端。

在rpc服务端上get获取linux的cpu_load、mem等监控的参数。

```shell
#成功进入docker容器后
cd work
cd bin
./display -i test.conf
```

![image-20240524170724622](https://my-figures.oss-cn-beijing.aliyuncs.com/Figures/image-20240524170724622.png)



## Stress压测

### 1. CPU 压力测试

**目的**：测试 CPU 在高负载下的性能和稳定性。

**命令**：

```
stress -c 4 -t 60
```

**解释**：

- `-c 4`：启动 4 个 CPU 工作线程，每个线程占用一个 CPU 核心的 100% 计算能力。
- `-t 60`：持续运行 60 秒。

### 2. 内存压力测试

**目的**：测试系统在高内存使用情况下的性能和稳定性。

**命令**：

```
stress -m 2 --vm-bytes 1G -t 60
```

**解释**：

- `-m 2`：启动 2 个内存工作线程。
- `--vm-bytes 1G`：每个线程分配 1GB 内存。
- `-t 60`：持续运行 60 秒。



## 优化TODO

### 加入连接池模块

![image-20240527164427533](https://my-figures.oss-cn-beijing.aliyuncs.com/Figures/image-20240527164427533.png)

**实现思路**:

1. **初始化连接池**: 在客户端启动时，初始化一组与服务端的连接。
2. **获取连接**: 在需要发送请求时，从连接池中获取一个空闲连接。
3. **使用连接**: 使用获取到的连接发送请求并接收响应。
4. **释放连接**: 请求处理完成后，将连接放回连接池，以供后续请求使用。















