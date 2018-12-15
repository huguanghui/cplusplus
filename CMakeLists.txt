cmake_minimum_required(VERSION 2.6)

project(abc C CXX)

set(CXX_FLAGS
-g
-Wall
-Werror
#-rdynamic
-std=c++11
)
string(REPLACE ";" " " CMAKE_CXX_FLAGS "${CXX_FLAGS}")

set(CMAKE_CXX_COMPILER "g++")
set(CMAKE_CXX_FLAGS_DEBUG "-O0")
set(CMAKE_VERBOSE_MAKEFILE OFF)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

message(STATUS "DIR = " ${PROJECT_BINARY_DIR})

#aux_source_directory(. DIR_SRCS)
#add_executable(abc ${DIR_SRCS})

if(NOT CMAKE_BUILD_NO_EXAMPLES)
    add_subdirectory(examples)
endif()