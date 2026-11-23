cmake_minimum_required(VERSION 3.29.6)

project(SimplifyRoute LANGUAGES CXX)

add_library(simplify_route_solution simplify_route.cpp)
target_include_directories(simplify_route_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})