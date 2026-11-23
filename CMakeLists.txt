cmake_minimum_required(VERSION 3.29.6)

project(LeetcodeProblemSolving LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(CTest)

add_subdirectory(points_and_segments)

add_subdirectory(non_overlapping_windows)

add_subdirectory(hash_table)

add_subdirectory(binary_search)

add_subdirectory(trees)

add_subdirectory(binary_search_tree)

add_subdirectory(overlapping_windows)

add_subdirectory(graphs)

add_subdirectory(linked_list)

add_subdirectory(stack)

add_subdirectory(greedy_algorithms)

add_subdirectory(array_and_matrix)

add_subdirectory(two_pointers)

add_subdirectory(bruteforce)

add_subdirectory(other_tasks)

if(BUILD_TESTING)
    add_subdirectory(tests)
endif()
