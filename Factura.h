#ifndef FACTURA_H
#define FACTURA_H
#include "Producto.h"
#include <string>
#include <vector>
using namespace std;



class Factura {
    public:
    Factura();
    void añadir_carrito(Producto p);
    void set_pago_cliente();
    void set_fechaFactura();
    void set_totalFactura();
    void set_generarFactura();
    void menu_factura();

    int id1;
    int id2;
    string fechaFactura;
    double totalFactura;
    float pago_cliente1;
    vector <Producto> productoFactura;
    static int id_global;
    vector<vector<string>> carrito;
    string fecha;
    string cliente_nombre;
    float cambio;

};

#endif //FACTURA_H
