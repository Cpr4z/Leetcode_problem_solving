cmake_minimum_required(VERSION 3.29)
project(TasksLeetcode)

set(CMAKE_CXX_STANDARD 26)

find_package(Boost REQUIRED)

if(Boost_FOUND)
    message("Boost include directories: ${Boost_INCLUDE_DIRS}")
    message("Boost library directories: ${Boost_LIBRARY_DIRS}")
    message("Boost libraries: ${Boost_LIBRARIES}")
endif()

add_executable(leetcode_Tasks tests.cpp
        minMovesTo.cpp
        minMovesTo.hpp)

add_executable(MyTests tests.cpp minMovesTo.cpp)

target_link_libraries(MyTests PRIVATE ${Boost_LIBRARIES})

target_include_directories(leetcode_Tasks PRIVATE ${Boost_INCLUDE_DIRS})
target_link_libraries(leetcode_Tasks PRIVATE ${Boost_LIBRARIES})