cmake_minimum_required(VERSION 3.29.6)

project(4Sum LANGUAGES CXX)

add_library(4_sum_solution 4Sum.cpp)
target_include_directories(4_sum_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})