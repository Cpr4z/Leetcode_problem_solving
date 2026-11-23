cmake_minimum_required(VERSION 3.29.6)

project(MergeLists LANGUAGES CXX)

add_library(merge_lists_solution merge_lists.cpp)
target_include_directories(merge_lists_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})