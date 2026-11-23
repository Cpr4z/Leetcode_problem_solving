cmake_minimum_required(VERSION 3.29.6)

project(MergeKSortedLists LANGUAGES CXX)

add_library(merge_k_sorted_lists_solution merge_k_sorted_lists.cpp)
target_include_directories(merge_k_sorted_lists_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})