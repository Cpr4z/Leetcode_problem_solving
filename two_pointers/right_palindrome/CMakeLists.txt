cmake_minimum_required(VERSION 3.29.6)

project(RightPalindrome LANGUAGES CXX)

add_library(right_palindrome_solution right_palindrome.cpp)
target_include_directories(right_palindrome_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})