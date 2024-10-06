#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

using namespace std;

class Empleado {
private:
    int idEmpleado;
    string nombre;

public:
    // Constructor
    Empleado(int id, string nombre);

    // Getters y Setters
    int getIdEmpleado();
    void setIdEmpleado(int id);
    string getNombre();
    void setNombre(string nombre);

    // Método para mostrar empleado
    void mostrarEmpleado();
};

#endif
