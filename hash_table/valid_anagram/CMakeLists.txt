cmake_minimum_required(VERSION 3.29.6)

project(ValidAnagram LANGUAGES CXX)

add_library(valid_anagram_solution valid_anagram.cpp)
target_include_directories(valid_anagram_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})