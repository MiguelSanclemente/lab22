#include "Factura.h"
#include "Cliente.h"
#include <iostream>
#include <ostream>

#include "Producto.h"
#include <string>
using namespace std;

    Factura::Factura() {}

    int Factura::id_global = 200;

    void Factura::set_idFactura() {

        this->id1 = id_global++;

        cout << this->id1 << endl;

    }

    void Factura::set_idCliente() {

        

    }


