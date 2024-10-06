#ifndef VECTOR_CLIENTE_H
#define VECTOR_CLIENTE_H
#include "Cliente.h"
#include "Crud.h"

namespace Vector_Cliente {
    class Vector_Cliente: public Crud::Crud{

        public:
        Vector_Cliente();
        void añadir(CLIENTE_H) override;
        void actualizar(CLIENTE_H) override;
        void mostrar(CLIENTE_H) override;
        void eliminar(CLIENTE_H) override;

};

} // Vector_Cliente

#endif //VECTOR_CLIENTE_H
