cmake_minimum_required(VERSION 2.8.9)
project(MyProgram LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(FunctionPointer functionPointer.cpp)