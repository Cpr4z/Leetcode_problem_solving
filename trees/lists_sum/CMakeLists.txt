cmake_minimum_required(VERSION 3.29.6)

project(ListsSum LANGUAGES CXX)

add_library(lists_sum_solution lists_sum.cpp)
target_include_directories(lists_sum_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})