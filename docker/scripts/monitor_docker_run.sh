#!/usr/bin/env bash

MONITOR_HOME_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )/../.." && pwd )"

display=""
if [ -z ${DISPLAY} ]; then
    display=":1"
else
    display="${DISPLAY}"
fi

local_host="$(hostname)"
user="${USER}"
uid="$(id -u)"
group="$(id -g -n)"
gid="$(id -g)"

echo "stop and rm docker" 
docker stop linux_monitor > /dev/null
docker rm -v -f linux_monitor > /dev/null

echo "start docker"

# 检查所有变量的值
echo "DISPLAY: $display"
echo "MONITOR_HOME_DIR: $MONITOR_HOME_DIR"
echo "XDG_RUNTIME_DIR: $XDG_RUNTIME_DIR"

docker run -it -d \
--name linux_monitor \
-e DISPLAY=$display \
--privileged=true \
-e DOCKER_USER="${user}" \
-e USER="${user}" \
-e DOCKER_USER_ID="${uid}" \
-e DOCKER_GRP="${group}" \
-e DOCKER_GRP_ID="${gid}" \
-e XDG_RUNTIME_DIR=$XDG_RUNTIME_DIR \
-v ${MONITOR_HOME_DIR}:/work \
-v ${XDG_RUNTIME_DIR}:${XDG_RUNTIME_DIR} \
--net host \
linux:monitor # 请确保这个名称和标签是正确的
