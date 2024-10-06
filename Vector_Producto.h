#ifndef VECTOR_PRODUCTO_H
#define VECTOR_PRODUCTO_H
#include "Crud.h"
#include "Producto.h"

namespace Vector_Producto {

class Vector_Producto: public Crud::Crud{
    public:
    void añadir(PRODUCTO_H) override;
    void actualizar(PRODUCTO_H) override;
    void producto(PRODUCTO_H) override;
    void eliminar(PRODUCTO_H) override;

};

} // Vector_Producto

#endif //VECTOR_PRODUCTO_H
