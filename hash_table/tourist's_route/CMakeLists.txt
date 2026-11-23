cmake_minimum_required(VERSION 3.29.6)

project(Tourist'sRoute LANGUAGES CXX)

add_library(tourists_route_solution tourist's_route.cpp)
target_include_directories(tourists_route_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_features(tourists_route_solution PUBLIC cxx_std_20)