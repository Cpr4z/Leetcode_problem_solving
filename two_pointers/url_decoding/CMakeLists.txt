cmake_minimum_required(VERSION 3.29.6)

project(UrlDecoding LANGUAGES CXX)

add_library(url_decoding_solution url_decoding.cpp)
target_include_directories(url_decoding_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})