cmake_minimum_required(VERSION 3.29.6)

project(PathSumII LANGUAGES CXX)

add_library(path_sum_ii_solution path_sum_ii.cpp)
target_include_directories(path_sum_ii_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})