#include "Producto.h"

#include <iostream>
#include <regex>

using namespace std;

    Producto::Producto() {}

    void Producto::set_nombre() {

        string nombre;
        cout << "Ingrese el nombre del producto: " << endl;
        this->nombre = nombre;
    }

    void Producto::set_id() {
        cout << "Ingrese el id: " << endl;
        cin >> this-> id;
        cin.ignore();
    }

    void Producto::set_cantidad() {
        cout <<"Ingrese el cantidad: " << endl;
        cin >> this-> cantidad;
        cin.ignore();
    }









