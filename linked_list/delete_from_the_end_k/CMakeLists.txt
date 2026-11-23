cmake_minimum_required(VERSION 3.29.6)

project(DeleteKFromTheEnd LANGUAGES CXX)

add_library(delete_k_from_the_end_solution delete_k_from_the_end.cpp)
target_include_directories(delete_k_from_the_end_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})