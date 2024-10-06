cmake_minimum_required(VERSION 3.29)
project(LAB2)

set(CMAKE_CXX_STANDARD 20)

add_executable(LAB2 main.cpp
        Cliente.cpp
        Cliente.h
        Producto.cpp
        Producto.h
        Empleado.cpp
        Empleado.h
        Factura.cpp
        Factura.h
        Crud.cpp
        Crud.h
        Vector_Empleado.cpp
        Vector_Empleado.h
        Vector_Cliente.cpp
        Vector_Cliente.h
        Persona.cpp
        Persona.h
        Vector_Producto.cpp
        Vector_Producto.h
        Agenda.cpp
        Agenda.h)
