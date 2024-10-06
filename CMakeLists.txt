cmake_minimum_required(VERSION 3.29)
project(LAB2)

set(CMAKE_CXX_STANDARD 20)

add_executable(LAB2 main.cpp
        Crud.cpp
        Crud.h
        Persona.cpp
        Persona.h
        Cliente.cpp
        Cliente.h
        Vectot_Cliente.cpp
        Vectot_Cliente.h
)
