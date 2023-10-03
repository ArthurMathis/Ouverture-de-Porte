cmake_minimum_required(VERSION 3.26)
project(EC1)

set(CMAKE_CXX_STANDARD 23)

add_executable(EC1 main.cpp
        source/autorisation.cpp
        header/autorisation.h
        source/badge.cpp
        header/badge.h
        source/porte.cpp
        header/porte.h
)
