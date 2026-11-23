cmake_minimum_required(VERSION 3.29.6)

project(FindKMax LANGUAGES CXX)

add_library(find_k_least_solution find_k_least.cpp)
target_include_directories(find_k_least_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})