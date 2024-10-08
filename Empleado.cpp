#include "Empleado.h"
#include <iostream>

using namespace std;

    Empleado::Empleado() {}


    void Empleado::menuVenta() {


    }

    int Empleado::id_global = 100;

    void Empleado::set_idEmpleado() {

        this->id = id_global++;
        cout << this->id << endl;

    }

    void Empleado::set_puesto() {
        cout << "Ingrese el cargo que ejerce: ";
        cin >> this -> puesto;
        cin.ignore();
    }

    void Empleado::set_salario() {
        cout << "Ingrese lo que gana: ";
        cin >> this -> salario;
        cin.ignore();
    }

    void Empleado::set_info() {
        Persona::set_info();
        set_idEmpleado();
        set_puesto();
        set_salario();
    }

    void Empleado::mostrar_info() {
        Persona::mostrar_info();
        cout << "El Id es: " << this->id << " su puesto es: "
        << this->puesto << " y su salario: "<< this->salario << endl;
    }



