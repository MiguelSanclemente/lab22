#include "Menu.h"
#include "Empleado.h"
#include "Cliente.h"
#include "Producto.h"
#include <iostream>

using namespace std;

Menu::Menu() {}

void Menu::set_menuPrincipal() {
    Empleado e;
    Cliente c;
    Producto p;
    int opcion = 0;

    do {
        cout << "Menu Principal" << endl;
        cout << "1. Cliente" << endl;
        cout << "2. Empleado" << endl;
        cout << "3. Producto" << endl;
        cout << "4. Realizar alguna compra" << endl;
        cout << "5. Salir" << endl;
        cin >> opcion;


        switch (opcion) {
            case 1:
                c.set_menuCliente();
            break;
            case 2:
                e.set_menuEmpleado();

            break;
            case 3:
                p.set_menuProducto();
            break;
            case 4:
                break;
            case 5:
                cout << "Chau" << endl;
                break;
            default:
                cout << "Marque las respuestas que es" << endl;
            break;

        }
    }while ( opcion !=5);
}

