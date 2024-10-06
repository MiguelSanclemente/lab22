#include <iostream>
#include <vector>
#include "Cliente.h"
#include "Producto.h"
#include "Empleado.h"
#include "Factura.h"
using namespace std;

int main() {
    vector<Cliente> clientes;
    vector<Producto> productos;
    vector<Empleado> empleados;
    vector<Factura> facturas;

    int opcion;

    do {
        cout << "\n=== CELUCOS BLIP0 ===" << endl;
        cout << "1. Agregar Cliente" << endl;
        cout << "2. Agregar Producto" << endl;
        cout << "3. Agregar Empleado" << endl;
        cout << "4. Realizar Venta" << endl;
        cout << "5. Ver Clientes" << endl;
        cout << "6. Ver Productos" << endl;
        cout << "7. Ver Empleados" << endl;
        cout << "8. Ver Facturas" << endl;
        cout << "9. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                // Agregar cliente
                int id;
                string nombre, fechaNac;
                cout << "ID Cliente: ";
                cin >> id;
                cout << "Nombre: ";
                cin.ignore();
                getline(cin, nombre);
                cout << "Fecha de Nacimiento (dd/mm/yyyy): ";
                getline(cin, fechaNac);

                clientes.push_back(Cliente(id, nombre, fechaNac));
                break;
            }
            case 2: {
                // Agregar producto
                int id, cantidad;
                double precio;
                string nombre, fechaFab;
                cout << "ID Producto: ";
                cin >> id;
                cout << "Nombre: ";
                cin.ignore();
                getline(cin, nombre);
                cout << "Cantidad: ";
                cin >> cantidad;
                cout << "Precio de Venta: ";
                cin >> precio;
                cout << "Fecha de Fabricación: ";
                cin.ignore();
                getline(cin, fechaFab);

                productos.push_back(Producto(id, nombre, cantidad, precio, fechaFab));
                break;
            }
            case 3: {
                // Agregar empleado
                int id;
                string nombre;
                cout << "ID Empleado: ";
                cin >> id;
                cout << "Nombre: ";
                cin.ignore();
                getline(cin, nombre);

                empleados.push_back(Empleado(id, nombre));
                break;
            }
            case 4: {
                // Realizar venta (factura)
                int idFactura, idCliente, cantidad;
                double total = 0;
                string fechaFactura;
                cout << "ID Factura: ";
                cin >> idFactura;
                cout << "ID Cliente: ";
                cin >> idCliente;
                cout << "Fecha de Factura (dd/mm/yyyy): ";
                cin.ignore();
                getline(cin, fechaFactura);

                Factura nuevaFactura(idFactura, idCliente, fechaFactura, total);

                int idProducto;
                do {
                    cout << "Ingrese ID de Producto (0 para finalizar): ";
                    cin >> idProducto;
                    if (idProducto == 0) break;

                    cout << "Cantidad: ";
                    cin >> cantidad;

                    for (auto& producto : productos) {
                        if (producto.getIdProducto() == idProducto && producto.getCantidad() >= cantidad) {
                            producto.setCantidad(producto.getCantidad() - cantidad);
                            nuevaFactura.agregarProducto(producto, cantidad);
                            total += producto.getPrecioVenta() * cantidad;
                        }
                    }
                } while (idProducto != 0);

                nuevaFactura.mostrarFactura();
                facturas.push_back(nuevaFactura);
                break;
            }
            case 5: {
                // Ver clientes
                for (auto& cliente : clientes) {
                    cliente.mostrarCliente();
                }
                break;
            }
            case 6: {
                // Ver productos
                for (auto& producto : productos) {
                    producto.mostrarProducto();
                }
                break;
            }
            case 7: {
                // Ver empleados
                for (auto& empleado : empleados) {
                    empleado.mostrarEmpleado();
                }
                break;
            }
            case 8: {
                // Ver facturas
                for (auto& factura : facturas) {
                    factura.mostrarFactura();
                }
                break;
            }
        }
    } while (opcion != 9);

    return 0;
}
