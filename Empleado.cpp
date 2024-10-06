#include "Empleado.h"
#include <iostream>
#include <string>

using namespace std;

Empleado::Empleado(int id, string nombre) : idEmpleado(id), nombre(nombre) {}

int Empleado::getIdEmpleado() {
    return idEmpleado;
}

void Empleado::setIdEmpleado(int id) {
    idEmpleado = id;
}

string Empleado::getNombre() {
    return nombre;
}

void Empleado::setNombre(string nombre) {
    this->nombre = nombre;
}

void Empleado::mostrarEmpleado() {
    cout << "ID Empleado: " << idEmpleado << "\nNombre: " << nombre << endl;
}
