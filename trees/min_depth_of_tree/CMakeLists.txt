cmake_minimum_required(VERSION 3.29.6)

project(MinDepthOfTree LANGUAGES CXX)

add_library(min_depth_of_tree_solution min_depth_of_tree.cpp)
target_include_directories(min_depth_of_tree_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})