cmake_minimum_required(VERSION 3.12.3)
project(observer_pattern)

set(CMAKE_CXX_STANDARD 17)
set( CMAKE_VERBOSE_MAKEFILE on)
if(WIN32)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
else()
    set(CMAKE_CXX_FLAGS -pthread)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wpedantic -Wextra")
    target_link_libraries(observer_pattern stdc++fs)
endif()

add_executable(observer_pattern main.cpp observer.cpp observer.h)