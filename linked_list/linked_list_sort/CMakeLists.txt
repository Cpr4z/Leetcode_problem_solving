cmake_minimum_required(VERSION 3.29.6)

project(LinkedListSort LANGUAGES CXX)

add_library(linked_list_sort_solution linked_list_sort.cpp)
target_include_directories(linked_list_sort_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})