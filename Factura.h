#ifndef FACTURA_H
#define FACTURA_H
#include "Producto.h"
#include <string>
#include <vector>
using namespace std;



class Factura {
    public:
    Factura();
    void set_idFactura();
    void set_idCliente();
    void set_fechaFactura();
    void set_totalFactura();
    void set_productoFactura();

    int id1;
    int id2;
    string fechaFactura;
    double totalFactura;
    vector <Producto> productoFactura;
    static int id_global;

};



#endif //FACTURA_H
