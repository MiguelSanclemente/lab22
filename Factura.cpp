#include "Factura.h"
#include <iostream>
#include <vector>
using namespace std;

Factura::Factura(int idFac, int idCli, string fecha, double total) : idFactura(idFac), idCliente(idCli), fechaFactura(fecha), totalFactura(total) {}

void Factura::agregarProducto(Producto producto, int cantidad) {
    productosVendidos.push_back(make_pair(producto, cantidad));
}

void Factura::mostrarFactura() {
    cout << "ID Factura: " << idFactura << "\nID Cliente: " << idCliente << "\nFecha Factura: " << fechaFactura
              << "\nTotal Factura: " << totalFactura << endl;

    cout << "Productos Vendidos: " << endl;
    for (auto& productoVendido : productosVendidos) {
        cout << "Producto: " << productoVendido.first.getNombre()
                  << " - Cantidad Vendida: " << productoVendido.second << endl;
    }
}
