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
        validArrangement.cpp
        validArrangement.hpp)

add_executable(MyTests2 tests.cpp validArrangement.cpp)

target_link_libraries(MyTests2 PRIVATE ${Boost_LIBRARIES})