cmake_minimum_required(VERSION 3.29.6)

project(GroupAnagrams LANGUAGES CXX)

add_library(group_anagrams_solution group_anagrams.cpp)
target_include_directories(group_anagrams_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_features(group_anagrams_solution PUBLIC cxx_std_20)