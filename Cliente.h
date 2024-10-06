#ifndef CLIENTE_H
#define CLIENTE_H
#include "Persona.h"

#include <string>
using namespace std;

class Cliente: public Persona::Persona{
private:
    int idCliente;
    string nombre;
    string fechaNacimiento;

public:
    // Constructor
    Cliente(int id, string nombre, string fechaNac);

    // Getters y Setters
    int getIdCliente();
    void setIdCliente(int id);
    string getNombre();
    void setNombre(string nombre);
    string getFechaNacimiento();
    void setFechaNacimiento(string fechaNac);


    void mostrarCliente();
};

#endif
