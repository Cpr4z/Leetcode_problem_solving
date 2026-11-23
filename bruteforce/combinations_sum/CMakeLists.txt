cmake_minimum_required(VERSION 3.29.6)

project(CombinationsSum LANGUAGES CXX)

add_library(combinations_sum_solution combinations_sum.cpp)
target_include_directories(combinations_sum_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})