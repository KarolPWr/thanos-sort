cmake_minimum_required(VERSION 3.19)
project(untitled1)

set(CMAKE_CXX_STANDARD 17)

add_library(Thanos thanos.cpp)

add_executable(untitled1 main.cpp)

target_link_libraries (untitled1 LINK_PUBLIC Thanos)

add_subdirectory(tests)
