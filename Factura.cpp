#include "Factura.h"
#include "Producto.h"
#include <iostream>
#include <ostream>
#include <ctime>
#include <string>
#include <limits>
#include "Vector_Cliente.h"
using namespace std;

Factura::Factura() {}
  void Factura::añadir_carrito(Producto p){
    string id = to_string(p.id);
    string nombre = p.nombre;
    string cantidad = to_string(p.cantidad);
    string precio = to_string(p.precio);
    carrito.push_back({id, nombre, cantidad, precio});
  }

  void Factura::set_totalFactura() {
    totalFactura = 0;
    for (const auto &i : carrito) {
      if (i.size() >= 3) {
        float cantidad = stoi(i[2]);
        float precio = stof(i[3]);
        totalFactura += cantidad * precio;
      } else {
        cout << "Error en el carrito" << endl;
      }
    }
  }

  void Factura::set_pago_cliente() {
    cout << "ingrese el pago: ";
    while (!(cin >> pago_cliente1)) {
      cout << "Entrada invalida, ingrese un numero subnormal";
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
  }

  void Factura::set_fechaFactura() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    fecha = to_string(1900 + ltm->tm_year) + "/" +
            to_string(1 + ltm->tm_mon) + "/" + to_string(ltm->tm_mday);
  }

  void Factura::set_generarFactura() {
    set_fechaFactura();
    cout << ">Datos del cliente:" << endl;
    cout << "Fecha: " << fecha << endl;
    cout << "Nombre: " << cliente_nombre << endl;
    cout << "ID: " << id1 << endl;
    for (auto &row : carrito) {
      for (auto &i : row) {
        cout << i << " ";
      }
    }
    cout << "\nSu compra:\n";
    cout << "Total: " << totalFactura << endl;
    cout << "Pago: " << pago_cliente1 << endl;
    cambio = pago_cliente1 - totalFactura;
    cout << "Cambio: " << cambio << endl;
    cout << "ID Factura: " << id2 << endl;
    cout << "___________________________" << endl;
  }





