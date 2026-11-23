cmake_minimum_required(VERSION 3.29.6)

project(LongestSubset LANGUAGES CXX)

add_library(longest_subset_solution longest_subset.cpp)
target_include_directories(longest_subset_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_features(longest_subset_solution PUBLIC cxx_std_20)