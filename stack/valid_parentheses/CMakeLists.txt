cmake_minimum_required(VERSION 3.29.6)

project(ValidParentheses LANGUAGES CXX)

add_library(valid_parentheses_solution ValidParentheses.cpp)
target_include_directories(valid_parentheses_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
