cmake_minimum_required(VERSION 3.29.6)

project(BracedGrammar LANGUAGES CXX)

add_library(braced_grammar_solution braced_grammar.cpp)
target_include_directories(braced_grammar_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_features(braced_grammar_solution PUBLIC cxx_std_20)