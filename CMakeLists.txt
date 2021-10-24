cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 20)

project(Scrabble)

set(TEST "TEST")
set(SOURCE "SOURCE")

set(TEST_DIR "${PROJECT_SOURCE_DIR}/test")
set(SRC_DIR "${PROJECT_SOURCE_DIR}/src")

add_subdirectory(src)
add_subdirectory(test)