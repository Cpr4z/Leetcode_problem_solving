cmake_minimum_required(VERSION 3.29.6)

project(ProductExceptSelf LANGUAGES CXX)

add_library(product_except_self_solution product_except_self.cpp)
target_include_directories(product_except_self_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})