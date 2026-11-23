cmake_minimum_required(VERSION 3.29.6)

project(4Sum LANGUAGES CXX)

add_library(3_sum_solution 3Sum.cpp)
target_include_directories(3_sum_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})