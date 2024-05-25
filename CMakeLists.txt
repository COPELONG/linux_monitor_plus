cmake_minimum_required(VERSION 3.10.2)
project(test_monitor LANGUAGES CXX)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

set(CMAKE_CXX_STANDARD 17)
# 生成debug版本，可以进行gdb调试
set(CMAKE_BUILD_TYPE "Debug")

# 设置项目可执行文件输出的路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# 设置项目库文件输出的路径
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

include_directories(${PROJECT_SOURCE_DIR}/mprpc/include)

include_directories(${PROJECT_SOURCE_DIR}/net)
# 设置项目库文件搜索路径 -L
link_directories(${PROJECT_SOURCE_DIR}/lib)


add_subdirectory(net)

add_subdirectory(proto)

add_subdirectory(mprpc)

add_subdirectory(rpc_manager)

add_subdirectory(test_monitor)

add_subdirectory(display_monitor)



