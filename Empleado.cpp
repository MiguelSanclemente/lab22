#include "Empleado.h"
#include <iostream>

#include "Vector_Empleado.h"


using namespace std;

    Empleado::Empleado() {}

    void Empleado::set_menuEmpleado() {
        Vector_Empleado v;
        int opcion = 0;
        do {
            cout << "Menu de opciones:" << endl;
            cout << "1. Crear empleado" << endl;
            cout << "2. Actualizar empleado" << endl;
            cout << "3. Mostrar empleado" << endl;
            cout << "4. Eliminar empleado" << endl;
            cout << "5. Salir" << endl;
            cin >> opcion;

            switch(opcion) //donde opción es la variable a comparar
            {
                case 1:
                    v.añadir();
                break;
                case 2:
                    v.actualizar();
                break;
                case 3:
                    v.mostrar();
                break;
                case 4:
                    v.eliminar();
                break;

                default:
                    cout << "papi, marque eso bien pelele" << endl;
                break;

            }
        } while(opcion != 5);
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



