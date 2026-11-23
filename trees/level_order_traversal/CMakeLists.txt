cmake_minimum_required(VERSION 3.29.6)

project(LevelOrderTraversal LANGUAGES CXX)

add_library(level_order_traversal_solution level_order_traversal.cpp)
target_include_directories(level_order_traversal_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})