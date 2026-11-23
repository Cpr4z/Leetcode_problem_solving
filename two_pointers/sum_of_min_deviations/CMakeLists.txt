cmake_minimum_required(VERSION 3.29.6)

project(SumOfMinDeviation LANGUAGES CXX)

add_library(sum_of_min_deviation_solution sum_of_min_deviations.cpp)
target_include_directories(sum_of_min_deviation_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})