cmake_minimum_required(VERSION 3.0)

project(POINT_CIRCLE)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories(${CMAKE_SOURCE_DIR}/inc)

add_executable(POINT_CIRCLE main.cpp src/point.cpp src/circle.cpp)


