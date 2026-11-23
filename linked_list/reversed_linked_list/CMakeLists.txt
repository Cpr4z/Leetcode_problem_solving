cmake_minimum_required(VERSION 3.29.6)

project(ReversedLinkedList LANGUAGES CXX)

add_library(reversed_linked_list_solution reversed_linked_list.cpp)
target_include_directories(reversed_linked_list_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})