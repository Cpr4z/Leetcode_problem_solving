cmake_minimum_required(VERSION 3.29.6)

project(SameTrees LANGUAGES CXX)

add_library(same_trees_solution same_trees.cpp)
target_include_directories(same_trees_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})