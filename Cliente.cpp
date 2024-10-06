#include "Cliente.h"

#include <iostream>

using namespace std;

    Cliente::Cliente() {}

    void Cliente::set_idCliente() {
        cout << "Ingresa el id: ";
        cin >>this-> id;
        cin.ignore();

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
        cout << "El Id es : " << this-> id << " Y su monto de plata es: "
        << this-> dineroCliente << endl;
    }




