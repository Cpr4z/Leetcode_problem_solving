cmake_minimum_required(VERSION 3.29.6)

project(MaxDepthOfTree LANGUAGES CXX)

add_library(max_depth_of_tree_solution max_depth_of_tree.cpp)
target_include_directories(max_depth_of_tree_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})