cmake_minimum_required(VERSION 3.29.6)

project(NumbersPermutation LANGUAGES CXX)

add_library(numbers_permutations_solution numbers_permutations.cpp)
target_include_directories(numbers_permutations_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})