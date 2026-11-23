cmake_minimum_required(VERSION 3.29.6)

project(StringsCompare LANGUAGES CXX)

add_library(strings_compare_solution strings_compare.cpp)
target_include_directories(strings_compare_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})