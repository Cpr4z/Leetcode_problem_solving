cmake_minimum_required(VERSION 3.29.6)

project(BraceDecoder LANGUAGES CXX)

add_library(brace_decoder_solution brace_decoder.cpp)
target_include_directories(brace_decoder_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_features(brace_decoder_solution PUBLIC cxx_std_20)