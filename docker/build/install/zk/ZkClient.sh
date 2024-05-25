#!/usr/bin/env bash

set -e

# 进入脚本所在目录
cd "$(dirname "${BASH_SOURCE[0]}")"

# 解压 ZooKeeper 安装包
VERSION="3.9.2"
PKG_NAME="apache-zookeeper-${VERSION}.tar.gz"

tar xzf "${PKG_NAME}" || exit 1

# 复制示例配置文件并安装 Maven
pushd apache-zookeeper-${VERSION}/
cd conf/
cp zoo_sample.cfg zoo.cfg
cd ..


# 编译 ZooKeeper Jute
cd zookeeper-jute
mvn compile

# 编译和安装 ZooKeeper C 客户端
cd ..
cd zookeeper-client/zookeeper-client-c

# 设置 ACLOCAL 环境变量 在docker环境中部署客户端，删除下方注释
#ENV ACLOCAL="aclocal -I /usr/local/share/aclocal"
ACLOCAL="aclocal -I /usr/local/share/aclocal" autoreconf -if

./configure
make 
make install

# 输出安装完成消息
echo "ZooKeeper Client successfully started."

popd

# 清理临时文件并更新库路径
echo "Cleanup complete."
ldconfig
