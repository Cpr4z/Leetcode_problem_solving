cmake_minimum_required(VERSION 3.29.6)

project(CompressSpaces LANGUAGES CXX)

add_library(compress_spaces_solution compress_spaces.cpp)
target_include_directories(compress_spaces_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_features(compress_spaces_solution PUBLIC cxx_std_20)

add_executable(compress_spaces main.cpp)
target_link_libraries(compress_spaces PRIVATE compress_spaces_solution)