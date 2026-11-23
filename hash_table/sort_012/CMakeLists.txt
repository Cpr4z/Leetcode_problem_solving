cmake_minimum_required(VERSION 3.29.6)

project(Sort012 LANGUAGES CXX)

add_library(sort_012_solution sort_012.cpp)
target_include_directories(sort_012_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})