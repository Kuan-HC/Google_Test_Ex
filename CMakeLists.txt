# cmake 最低版本需求
cmake_minimum_required(VERSION 3.17)

# 工程名稱
project(gtest)

# 添加gtest工程目录
add_subdirectory(googletest)

add_executable(a main.cpp)

include_directories(googletest/googletest/include)
include_directories(googletest/googlemock/include)

# 添加gtest庫
target_link_libraries(a gtest_main gmock_main)