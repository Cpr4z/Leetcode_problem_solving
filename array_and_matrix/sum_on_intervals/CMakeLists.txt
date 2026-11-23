cmake_minimum_required(VERSION 3.29.6)

project(SumOnIntervals LANGUAGES CXX)

add_library(sum_on_intervals_solution sum_on_intervals.cpp)
target_include_directories(sum_on_intervals_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})