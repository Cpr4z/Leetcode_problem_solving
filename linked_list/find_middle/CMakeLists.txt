cmake_minimum_required(VERSION 3.29.6)

project(FindMiddle LANGUAGES CXX)

add_library(find_middle_solution find_middle.cpp)
target_include_directories(find_middle_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})