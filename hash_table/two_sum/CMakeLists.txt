cmake_minimum_required(VERSION 3.29.6)

project(TwoSum LANGUAGES CXX)

add_library(two_sum_solution twoSum.cpp)
target_include_directories(two_sum_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})