#ifndef VECTOR_EMPLEADO_H
#define VECTOR_EMPLEADO_H
#include "Crud.h"
#include "Empleado.h"
#include <vector>
using namespace std;



class Vector_Empleado: public Crud{
    public:
    Vector_Empleado();
    void añadir() override;
    void actualizar() override;
    void mostrar() override;
    void eliminar() override;
    bool comprobar(const int& id);
    vector <Empleado> vector_empleado;


};



#endif //VECTOR_EMPLEADO_H
