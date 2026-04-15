cmake_minimum_required(VERSION 3.31)
project(Prueba3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Prueba3
        ast.cpp
        ast.h
        main.cpp
        parser.cpp
        parser.h
        scanner.cpp
        scanner.h
        token.cpp
        token.h
        visitor.cpp
        visitor.h
        parser.cpp
        parser.h
        parser.cpp
        parser.cpp
        parser.h)
