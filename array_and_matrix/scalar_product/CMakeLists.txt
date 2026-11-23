cmake_minimum_required(VERSION 3.29.6)

project(ScalarProduct LANGUAGES CXX)

add_library(scalar_product_solution scalar_product.cpp)
target_include_directories(scalar_product_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})