cmake_minimum_required(VERSION 3.29.6)

project(LinkedList LANGUAGES CXX)

add_library(linked_list_cycle_solution linked_list_cycle.cpp)
target_include_directories(linked_list_cycle_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})