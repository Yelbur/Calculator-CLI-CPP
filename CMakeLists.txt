cmake_minimum_required(VERSION 3.20)

project(calculatorCLI VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(calculatorCLI
    src/main.cpp
    src/commands/math.cpp
    src/commands/cli.cpp
)

target_include_directories(calculatorCLI PRIVATE src)