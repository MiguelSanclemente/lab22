#ifndef FACTURA_H
#define FACTURA_H

#include <vector>
#include <string>
#include "Producto.h"
using namespace std;

class Factura {
private:
    int idFactura;
    int idCliente;
    string fechaFactura;
    double totalFactura;
    vector<std::pair<Producto, int>> productosVendidos;  // Producto y cantidad vendida

public:
    // Constructor
    Factura(int idFac, int idCli, std::string fecha, double total);

    // Método para agregar productos vendidos
    void agregarProducto(Producto producto, int cantidad);

    // Método para mostrar factura
    void mostrarFactura();
};

#endif

