cmake_minimum_required(VERSION 3.29.6)

project(AddTwoNumbers LANGUAGES CXX)

add_library(add_two_numbers_solution add_two_numbers.cpp)
target_include_directories(add_two_numbers_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})