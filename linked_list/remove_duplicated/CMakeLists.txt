cmake_minimum_required(VERSION 3.29.6)

project(RemoveDuplicates LANGUAGES CXX)

add_library(remove_duplicates_solution remove_duplicates.cpp)
target_include_directories(remove_duplicates_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})