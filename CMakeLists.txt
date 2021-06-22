cmake_minimum_required(VERSION 3.19)
project(untitled1)


set(CMAKE_CXX_STANDARD 17)

add_library(libthanos STATIC thanos.cpp thanos.hpp)

target_include_directories(libthanos PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        )

add_executable(untitled1 main.cpp)

target_link_libraries (untitled1 LINK_PUBLIC libthanos)

add_subdirectory(tests)




