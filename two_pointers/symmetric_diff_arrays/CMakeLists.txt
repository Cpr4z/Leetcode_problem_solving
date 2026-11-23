cmake_minimum_required(VERSION 3.29.6)

project(SymmetricDiffArrays LANGUAGES CXX)

add_library(symmetric_diff_arrays_solution symmetric_diff_arrays.cpp)
target_include_directories(symmetric_diff_arrays_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})