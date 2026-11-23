cmake_minimum_required(VERSION 3.29.6)

project(SumFromToLeaf LANGUAGES CXX)

add_library(sum_from_root_to_leaf_solution sum_from_root_to_leaf.cpp)
target_include_directories(sum_from_root_to_leaf_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})