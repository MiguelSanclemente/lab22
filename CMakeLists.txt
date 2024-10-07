cmake_minimum_required(VERSION 3.29)
project(LAB2)

set(CMAKE_CXX_STANDARD 20)

add_executable(LAB2 main.cpp
        Crud.h
        Persona.cpp
        Persona.h
        Cliente.cpp
        Cliente.h
        Vector_Cliente.cpp
        Vector_Cliente.h
        Empleado.cpp
        Empleado.h
        Vector_Empleado.cpp
        Vector_Empleado.h
        Producto.cpp
        Producto.h
        Vector_Producto.cpp
        Vector_Producto.h
)
