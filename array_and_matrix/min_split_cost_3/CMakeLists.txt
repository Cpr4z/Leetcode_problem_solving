cmake_minimum_required(VERSION 3.29.6)

project(MinSplitCost3 LANGUAGES CXX)

add_library(min_split_cost_3_solution min_split_cost_3.cpp)
target_include_directories(min_split_cost_3_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})