#ifndef VECTOR_PRODUCTO_H
#define VECTOR_PRODUCTO_H
#include "Crud.h"
#include "Producto.h"
#include <vector>

class Vector_Producto: public Crud
{
    public:
    Vector_Producto();
    void añadir() override;
    void actualizar();
    void mostrar() override;
    void eliminar() override;
    bool comprobar(const int& id);
    vector <Producto> vector_producto;

};



#endif //VECTOR_PRODUCTO_H
