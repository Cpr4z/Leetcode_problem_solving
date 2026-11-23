cmake_minimum_required(VERSION 3.29.6)

project(FindMinDifference LANGUAGES CXX)

add_library(find_min_difference_solution find_difference.cpp)
target_include_directories(find_min_difference_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})