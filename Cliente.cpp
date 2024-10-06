#include "Cliente.h"
#include <iostream>
#include <string>

using namespace std;

Cliente::Cliente(int id, string nombre, string fechaNac) : idCliente(id), nombre(nombre), fechaNacimiento(fechaNac) {}

int Cliente::getIdCliente() {
    return idCliente;
}

void Cliente::setIdCliente(int id) {
    idCliente = id;
}

string Cliente::getNombre() {
    return nombre;
}

void Cliente::setNombre(string nombre) {
    this->nombre = nombre;
}

string Cliente::getFechaNacimiento() {
    return fechaNacimiento;
}

void Cliente::setFechaNacimiento(string fechaNac) {
    fechaNacimiento = fechaNac;
}

void Cliente::mostrarCliente() {
    cout << "ID Cliente: " << idCliente << "\nNombre: " << nombre << "\nFecha de Nacimiento: " << fechaNacimiento << endl;
}
