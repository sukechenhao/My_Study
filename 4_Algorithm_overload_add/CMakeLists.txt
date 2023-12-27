cmake_minimum_required(VERSION 3.0)

project(Operator_add)

# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(${CMAKE_SOURCE_DIR}/inc)

add_executable(Operator_add main.cpp src/algorithm_overlop_add.cpp)