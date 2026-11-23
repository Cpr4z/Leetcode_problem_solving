cmake_minimum_required(VERSION 3.29.6)

project(HigherOrLower LANGUAGES CXX)

add_library(higher_or_lower_solution higher_or_lower.cpp)
target_include_directories(higher_or_lower_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})