cmake_minimum_required(VERSION 3.0)

project(CIRCLE)

include_directories(${CMAKE_SOURCE_DIR}/inc) 

add_executable(circle main.cpp src/circle.cpp)

