cmake_minimum_required(VERSION 3.29.6)

project(SumInSortedArray LANGUAGES CXX)

add_library(sum_in_sorted_array_solution sum_in_sorted_array.cpp)
target_include_directories(sum_in_sorted_array_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})