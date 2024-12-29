cmake_minimum_required(VERSION 3.29)
project(TasksLeetcode1)

set(CMAKE_CXX_STANDARD 26)

find_package(Boost REQUIRED)

if(Boost_FOUND)
    message("Boost include directories: ${Boost_INCLUDE_DIRS}")
    message("Boost library directories: ${Boost_LIBRARY_DIRS}")
    message("Boost libraries: ${Boost_LIBRARIES}")
endif()

add_executable(leetcode_Tasks1 tests.cpp
        minMovesTo2.cpp
        minMovesTo2.hpp)

add_executable(MyTests1 tests.cpp minMovesTo2.cpp)

target_link_libraries(MyTests1 PRIVATE ${Boost_LIBRARIES})