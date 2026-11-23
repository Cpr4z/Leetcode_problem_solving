cmake_minimum_required(VERSION 3.29.6)

project(CartesianProduct LANGUAGES CXX)

add_library(cartesian_product_solution cartesian_product.cpp)
target_include_directories(cartesian_product_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})