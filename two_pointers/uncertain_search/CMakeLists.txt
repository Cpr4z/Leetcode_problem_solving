cmake_minimum_required(VERSION 3.29.6)

project(UncertainSearch LANGUAGES CXX)

add_library(uncertain_search_solution uncertain_search.cpp)
target_include_directories(uncertain_search_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})