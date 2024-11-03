#include "Producto.h"
#include "Vector_Producto.h"
#include <iostream>
#include <regex>

using namespace std;

int Producto::id_global = 5000;
    Producto::Producto() {}



    void Producto::set_idProducto() {
        this->id = id_global++;
        cout << "Su id es: " << this->id << endl;
    }

    void Producto::set_menuProducto() {
        Vector_Producto v;
        int opcion = 0;
        do {

            cout << "Menu de producto:" << endl;
            cout << "1. Crear Producto" << endl;
            cout << "2. Actualizar Producto" << endl;
            cout << "3. Mostrar Producto" << endl;
            cout << "4. Eliminar Producto" << endl;
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
        void Producto::set_nombre() {

            string nombre;
            cout << "Ingrese el nombre del producto: " << endl;
            cin >> nombre;
            this->nombre = nombre;
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

        void Producto::set_info(){
            set_nombre();
            set_idProducto();
            set_cantidad();
            set_precio();
            set_fechaFabricacion();
        }

        void Producto::mostrar_info(){

            cout << "Nombre del producto: " << this->nombre << "; id: " << this->id << "; cantidad: "
            << this->cantidad << "; con un valor de: $" << this->precio << "; Su fabricacion fue el: "
            << this->fechaFabricacion << endl;
        }












