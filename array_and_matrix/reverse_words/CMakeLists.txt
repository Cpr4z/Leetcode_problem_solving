cmake_minimum_required(VERSION 3.29.6)

project(ReverseWords LANGUAGES CXX)

add_library(reverse_words_solution reverse_words.cpp)
target_include_directories(reverse_words_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})