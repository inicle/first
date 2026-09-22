# 规定 CMake 最低版本
cmake_minimum_required(VERSION 3.10)

# 设置项目名称
project(HelloWorld)

# 生成可执行文件（名字叫 hello，源文件是 main.cpp）
add_executable(hello main.cpp)
