cmake_minimum_required(VERSION 3.16)
project(Scrabble)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE SCRABBLE_SRC
        "src/*.hpp"
        "src/*.cpp"
        )

add_executable(Scrabble ${SCRABBLE_SRC})
