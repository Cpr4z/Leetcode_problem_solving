cmake_minimum_required(VERSION 3.29.6)

project(ReverseVowels LANGUAGES CXX)

add_library(reverse_vowels_solution reverse_vowels.cpp)
target_include_directories(reverse_vowels_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})