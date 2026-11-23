cmake_minimum_required(VERSION 3.29.6)

project(IsBalancedTree LANGUAGES CXX)

add_library(is_balanced_tree_solution is_balanced_tree.cpp)
target_include_directories(is_balanced_tree_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})