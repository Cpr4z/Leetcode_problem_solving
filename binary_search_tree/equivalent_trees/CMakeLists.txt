cmake_minimum_required(VERSION 3.29.6)

project(EquivalentTrees LANGUAGES CXX)

add_library(equivalent_trees_solution equivalent_trees.cpp)
target_include_directories(equivalent_trees_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})