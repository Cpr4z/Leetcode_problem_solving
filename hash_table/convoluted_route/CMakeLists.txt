cmake_minimum_required(VERSION 3.29.6)

project(ConvolutedSearch LANGUAGES CXX)

add_library(convoluted_route_solution convoluted_route.cpp)
target_include_directories(convoluted_route_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})