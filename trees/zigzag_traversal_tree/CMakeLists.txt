cmake_minimum_required(VERSION 3.29.6)

project(ZigzagTraversal LANGUAGES CXX)

add_library(zigzag_traversal_solution zigzag_traversal_tree.cpp)
target_include_directories(zigzag_traversal_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})