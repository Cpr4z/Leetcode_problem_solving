cmake_minimum_required(VERSION 3.29.6)

project(TopKFrequentWords LANGUAGES CXX)

add_library(top_k_frequent_words_solution top_k_frequent_words.cpp)
target_include_directories(top_k_frequent_words_solution PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})