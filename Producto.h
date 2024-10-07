#ifndef PRODUCTO_H
#define PRODUCTO_H
#include  <string>
using namespace std;


class Producto {

    public:
    Producto();

    void set_nombre();
    void set_idProducto();
    void set_cantidad();
    void set_precio();
    void set_fechaFabricacion();

    string nombre;
    int id;
    int cantidad;
    float precio;
    string fechaFabricacion;





};



#endif //PRODUCTO_H
