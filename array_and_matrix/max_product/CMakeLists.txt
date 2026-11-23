cmake_minimum_required(VERSION 3.29.6)

project(MaxProduct LANGUAGES CXX)

add_library(max_product_solution max_product.cpp)
target_include_directories(max_product_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})