cmake_minimum_required(VERSION 3.29.6)

project(TreeDiameter LANGUAGES CXX)

add_library(tree_diameter_solution tree_diameter.cpp)
target_include_directories(tree_diameter_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})