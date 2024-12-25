cmake_minimum_required(VERSION 3.22)

message(INFO " Cmake Version : "${CMAKE_VERSION})

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(FunctionPointer functionPointer.cpp)