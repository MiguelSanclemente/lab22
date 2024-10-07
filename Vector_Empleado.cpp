#include "Vector_Empleado.h"
#include "Funciones.h"
#include "Empleado.h"
#include <iostream>
#include <vector>

Vector_Empleado::Vector_Empleado() {}

bool Vector_Empleado::comprobar(const int &id) {

    if(busqueda_binaria(this->vector_empleado, id) != -1)
    {
        return true;
    }
    return false;
}

void Vector_Empleado::añadir() {

    Empleado obj;
    obj.set_info();
    while (comprobar(obj.id) == true) {
        cout << "El id que usted ingreso ya se encuentra en uso: " << endl;
        obj.set_idEmpleado();
    }
    this->vector_empleado.push_back(obj);
}

void Vector_Empleado::actualizar() {

    int id;
    cout << "ingrese el id del empleado que quiere actualizar" << endl;
    cin >> id;
    cin.ignore();
    int resultado = busqueda_binaria(this->vector_empleado,id);
    if (resultado != -1)
    {
        cout << "se encontro el empleado a actualizar" << endl;
        this->vector_empleado[resultado].set_info();
        return;
    }else
    {
        cout << "no se encontro empleado a actualizar" << endl;
    }

}

void Vector_Empleado::mostrar() {

    for(auto a: this->vector_empleado) {
        a.mostrar_info();
    }
    return;
}

void Vector_Empleado::eliminar() {

    int id;
    cout << "Ingrese el id a eliminar:  " << endl;
    cin >> id;
    cin.ignore();
    int resultado = busqueda_binaria(this->vector_empleado, id);
    if (resultado != -1) {

        this->vector_empleado.erase(this->vector_empleado.begin() + resultado);
        cout << "se encontro el empleado a actualizar" << endl;
        return;
    }else
        cout << "no se encontro el empleado a actualizar" << endl;
    return;
}


