cmake_minimum_required(VERSION 3.29.6)

project(RouteOptimization LANGUAGES CXX)

add_library(route_optimization_solution route_optimization.cpp)
target_include_directories(route_optimization_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
