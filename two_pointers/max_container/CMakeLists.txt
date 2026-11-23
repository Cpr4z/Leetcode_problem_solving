cmake_minimum_required(VERSION 3.29.6)

project(MaxContainer LANGUAGES CXX)

add_library(max_container_solution max_container.cpp)
target_include_directories(max_container_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
