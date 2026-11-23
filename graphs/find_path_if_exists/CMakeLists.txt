cmake_minimum_required(VERSION 3.29.6)

project(FindPathIfExists LANGUAGES CXX)

add_library(find_path_if_exists_solution find_path_if_exists.cpp)
target_include_directories(find_path_if_exists_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
