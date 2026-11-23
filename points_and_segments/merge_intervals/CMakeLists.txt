cmake_minimum_required(VERSION 3.29.6)

project(MergeIntervals LANGUAGES CXX)

add_library(merge_intervals_solution merge_intervals.cpp)
target_include_directories(merge_intervals_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_features(merge_intervals_solution PUBLIC cxx_std_20)