cmake_minimum_required(VERSION 3.29.6)

project(PalindromeList LANGUAGES CXX)

add_library(palindrome_list_solution palindrome_list.cpp)
target_include_directories(palindrome_list_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})