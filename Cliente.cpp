#include "Cliente.h"

#include "Vector_Cliente.h"

#include <iostream>

using namespace std;

    Cliente::Cliente() {}


void Cliente::set_menuCliente() {
        Vector_Cliente v;
        int opcion = 0;
        do {

            cout << "Menu de cliente:" << endl;
            cout << "1. Crear cliente" << endl;
            cout << "2. Actualizar cliente" << endl;
            cout << "3. Mostrar cliente" << endl;
            cout << "4. Eliminar cliente" << endl;
            cout << "5. Volver" << endl;
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
                case 5:
                    cout << "chau" <<endl;
                break;

                default:
                    cout << "papi, marque eso bien pelele" << endl;
                break;

            }
        } while(opcion != 5);
    }

        int Cliente::id_global = 3000;

        void Cliente::set_idCliente() {

            this->id = id_global++;
            cout << "El id de cliente es : " << this->id << endl;
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



