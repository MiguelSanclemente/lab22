#include "Menu.h"
#include "Empleado.h"
#include "Cliente.h"
#include "Producto.h"
#include <iostream>

#include "Factura.h"
#include "Vector_Producto.h"

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
                set_menuCompra();
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

void Menu::set_menuCompra() {
    int opcion = 0;
    Factura f;
    do {

        cout << "Menu Compra" << endl;
        cout << "1. Seleccionar producto. " << endl;
        cout << "2. comprar productos seleccionados. " << endl;
        cout << "3. volver." << endl;
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int id_producto_cliente;
                int contador = 1;
                for (auto i : Vector_Producto::vector_producto) {
                    cout << contador << endl;
                    i.mostrar_info();
                    contador++;
                    cin >> id_producto_cliente ;
                }
            }

            break;

            case 2: {
                f.set_totalFactura();
                cout << "esto es lo que debe pagar: ";
                cout << f.totalFactura << endl;
                float pagar = 0;
                while (pagar < f.totalFactura) {
                    cout << "ingrese el valor";
                    cin >> pagar;
                    cin.ignore();
                }
                cout << "su cambio es: " << pagar - f.totalFactura<< endl;
                Menu::set_ver_factura(f);
                break;
            }
        }
    }while (opcion != 3);
}

void Menu::set_ver_factura(Factura f) {
    char c;
    cout << "Desea ver su factura? Ingrese s para si, n para no" << endl;
    cin >> c;
    if (c == 's') {
        f.set_generarFactura();
    }
    return;
}