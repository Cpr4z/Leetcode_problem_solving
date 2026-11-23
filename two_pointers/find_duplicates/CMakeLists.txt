cmake_minimum_required(VERSION 3.29.6)

project(FindDuplicates LANGUAGES CXX)

add_library(find_duplicates_solution find_duplicates.cpp)
target_include_directories(find_duplicates_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})