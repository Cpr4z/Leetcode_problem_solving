cmake_minimum_required(VERSION 3.29.6)

project(KClosestNumbers LANGUAGES CXX)

add_library(k_closest_numbers_solution k_closest_numbers.cpp)
target_include_directories(k_closest_numbers_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})