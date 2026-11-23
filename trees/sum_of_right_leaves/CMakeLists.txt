cmake_minimum_required(VERSION 3.29.6)

project(SumOfRightLeaves LANGUAGES CXX)

add_library(sum_of_right_leaves_solution sum_of_right_leaves.cpp)
target_include_directories(sum_of_right_leaves_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})