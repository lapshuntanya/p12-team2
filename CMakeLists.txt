cmake_minimum_required(VERSION 3.24)
project(p12_team2)

set(CMAKE_CXX_STANDARD 20)

file(GLOB SOURCE_FILES
        "src/*.h"
        "src/*.cpp"
        )

add_executable(p12_team2 main.cpp ${SOURCE_FILES})
