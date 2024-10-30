#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>
#include "Persona.h"
#include <iostream>

using namespace std;


class Empleado: public Persona {

    public:
    Empleado();
    void set_menuEmpleado();
    void set_idEmpleado();
    void set_puesto();
    void set_salario();
    void set_info()override;
    void mostrar_info()override;

    int id;
    string puesto;
    long int salario;
    static int id_global;

    string menuEmpleado;


};



#endif //EMPLEADO_H
