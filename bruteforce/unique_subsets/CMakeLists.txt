cmake_minimum_required(VERSION 3.29.6)

project(UniqueSubsets LANGUAGES CXX)

add_library(unique_subsets_solution unique_subsets.cpp)
target_include_directories(unique_subsets_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})