cmake_minimum_required(VERSION 3.29.6)

project(IsSymmetricTree LANGUAGES CXX)

add_library(is_symmetric_tree_solution is_symmetric_tree.cpp)
target_include_directories(is_symmetric_tree_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})