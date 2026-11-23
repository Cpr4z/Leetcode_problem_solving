cmake_minimum_required(VERSION 3.29.6)

project(MaxSumOfSubarray LANGUAGES CXX)

add_library(max_sum_of_subarray_solution max_sum_of_subarray.cpp)
target_include_directories(max_sum_of_subarray_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})