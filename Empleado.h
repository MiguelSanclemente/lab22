#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <string>
#include "Persona.h"
using namespace std;


class Empleado: public Persona {
    public:
    Empleado();
    void menuVenta();
    void set_idEmpleado();
    void set_puesto();
    void set_salario();
    void set_info()override;
    void mostrar_info()override;

    int id;
    string puesto;
    long int salario;
    static int id_global;



};



#endif //EMPLEADO_H
