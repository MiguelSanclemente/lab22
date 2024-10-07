#include "Producto.h"

#include <iostream>
#include <regex>

using namespace std;

    Producto::Producto() {}

    void Producto::set_nombre() {

        string nombre;
        cout << "Ingrese el nombre del producto: " << endl;
        cin >> nombre;
        this->nombre = nombre;
    }

    void Producto::set_idProducto() {
        cout << "Ingrese el id: " << endl;
        cin >> this-> id;
        cin.ignore();
    }

    void Producto::set_cantidad() {
        cout <<"Ingrese el cantidad: " << endl;
        cin >> this-> cantidad;
        cin.ignore();
    }


    void Producto::set_precio() {
        cout << "Ingrese el precio: " << endl;
        cin >> this->precio;
        cin.ignore();
    }

    void Producto::set_fechaFabricacion() {
        regex comprobar(R"((0[0-9]|[12][0-9]|3[01])/(0[0-9]|1[0-2])/\d{4})");
        while (true)
        {
            string fecha;
            cout << "ingrese la fecha de fabricacion  en el formato: (dd/mm/yyyy): " << endl;
            cin >> fecha;
            if(regex_match(fecha,comprobar))
            {
                this->fechaFabricacion = fecha;
                break;
            }else
            {
                cout << "Escriba la fecha en el formato requerido: " << endl;
            }
        }
        return;
    }

    void Producto::set_info() {
        set_nombre();
        set_idProducto();
        set_cantidad();
        set_precio();
        set_fechaFabricacion();
    }

   void Producto::mostrar_info() {

        cout << "Nombre del producto: " << this->nombre << "; id: " << this->id << "; cantidad: "
        << this->cantidad << "; con un valor de: $" << this->precio << "; Su fabricacion fue el: "
        << this->fechaFabricacion << endl;
   }










