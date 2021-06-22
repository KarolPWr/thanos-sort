
add_subdirectory(lib/googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(tests_run test1.cpp)
target_link_libraries(tests_run gtest gtest_main libthanos)
