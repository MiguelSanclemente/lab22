#ifndef PRODUCTO_H
#define PRODUCTO_H
#include  <string>
using namespace std;


class Producto {

    public:
    Producto();


    void set_menuProducto();

    void set_nombre();
    void set_idProducto();
    void set_cantidad();
    void set_precio();
    void set_fechaFabricacion();
    virtual void set_info();
    virtual void mostrar_info();

    string nombre;
    int id;
    int cantidad;
    float precio;
    string fechaFabricacion;

    static int id_global;
    string menuProducto;


};



#endif //PRODUCTO_H
