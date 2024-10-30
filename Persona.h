#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using namespace std;

class Persona {
public:
    void set_nombre();
    void set_fechaNacimiento();
    virtual void set_info();
    virtual void mostrar_info();
    string nombre;
    string fechaNacimiento;

    Persona();
};



#endif //PERSONA_H
