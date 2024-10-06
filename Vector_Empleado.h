#ifndef VECTOR_EMPLEADO_H
#define VECTOR_EMPLEADO_H
#include "Empleado.h"
#include "Crud.h"

namespace Vector_Empleado {
    class Vector_Empleado: public Crud::Crud {
        public:
        Vector_Empleado();
        void añadir(EMPLEADO_H) override;
        void actualizar(EMPLEADO_H) override;
        void mostrar(EMPLEADO_H) override;
        void eliminar(EMPLEADO_H) override;

};

} // Vector_Empleado

#endif //VECTOR_EMPLEADO_H
