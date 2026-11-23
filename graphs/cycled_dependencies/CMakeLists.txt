cmake_minimum_required(VERSION 3.29.6)

project(CycledDependencies LANGUAGES CXX)

add_library(cycled_dependencies_solution cycled_dependencies.cpp)
target_include_directories(cycled_dependencies_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
