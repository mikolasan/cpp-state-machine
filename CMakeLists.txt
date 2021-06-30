cmake_minimum_required(VERSION 3.10)

project(cpp-state-machine VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJECT_SOURCES
    main.cpp
    Machine.cpp
    MachineStates.cpp
)

add_executable(vending-machine ${PROJECT_SOURCES})