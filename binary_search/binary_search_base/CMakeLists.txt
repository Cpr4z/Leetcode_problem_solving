cmake_minimum_required(VERSION 3.29.6)

project(BinarySearch LANGUAGES CXX)

add_library(binary_search_solution binary_search.cpp)
target_include_directories(binary_search_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})