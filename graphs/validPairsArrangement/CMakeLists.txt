cmake_minimum_required(VERSION 3.29.6)

project(ValidPairsArrangement LANGUAGES CXX)

add_library(valid_pairs_arrangement_solution validArrangement.cpp)
target_include_directories(valid_pairs_arrangement_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
