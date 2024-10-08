#include "Cliente.h"

#include <iostream>

using namespace std;

    Cliente::Cliente() {}

    int Cliente::id_global = 3000;

    void Cliente::set_idCliente() {

        this->id = id_global++;
        cout << this->id << endl;
    }

    void Cliente::set_dineroCliente() {
        cout << "Cuanto dinero tiene: " << endl;
        cin >> this-> dineroCliente;
        cin.ignore();
    }


    void Cliente::set_info() {
        Persona::set_info();
        set_idCliente();
        set_dineroCliente();
    }

    void Cliente::mostrar_info() {
        Persona::mostrar_info();
        cout << "Con id: " << this-> id << " Y su monto de plata es: "
        << this-> dineroCliente << endl;
    }




