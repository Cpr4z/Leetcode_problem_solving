cmake_minimum_required(VERSION 3.29.6)

project(DeleteRepeats LANGUAGES CXX)

add_library(delete_repeats_solution delete_repeats.cpp)
target_include_directories(delete_repeats_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})