#include "Producto.h"
#include <iostream>
#include <string>
using namespace std;

// Aquí solo defines los métodos de Producto
Producto::Producto(int id, string nombre, int cantidad, double precio, string fechaFab)
    : idProducto(id), nombre(nombre), cantidad(cantidad), precioVenta(precio), fechaFabricacion(fechaFab) {}

int Producto::getIdProducto() {
    return idProducto;
}

void Producto::setIdProducto(int id) {
    idProducto = id;
}

string Producto::getNombre() {
    return nombre;
}

void Producto::setNombre(string nombre) {
    this->nombre = nombre;
}

int Producto::getCantidad() {
    return cantidad;
}

void Producto::setCantidad(int cantidad) {
    this->cantidad = cantidad;
}

double Producto::getPrecioVenta() {
    return precioVenta;
}

void Producto::setPrecioVenta(double precio) {
    precioVenta = precio;
}

string Producto::getFechaFabricacion() {
    return fechaFabricacion;
}

void Producto::setFechaFabricacion(string fechaFab) {
    fechaFabricacion = fechaFab;
}

void Producto::mostrarProducto() {
    cout << "ID Producto: " << idProducto << "\nNombre: " << nombre << "\nCantidad: " << cantidad
              << "\nPrecio de Venta: " << precioVenta << "\nFecha de Fabricación: " << fechaFabricacion << endl;
}
