#include <iostream>
#include "Persona.h"
#include <regex>
using namespace std;

    Persona::Persona(){}
    void Persona::set_nombre()
    {
       string nombre;
        cout << "Ingrese el nombre: "; cin >> nombre;
        this->nombre = nombre;
    }

    void Persona::set_fechaNacimiento()
    {
        regex comprobar(R"((0[0-9]|[12][0-9]|3[01])/(0[0-9]|1[0-2])/\d{4})");
        while (true)
        {
            string fecha;
            cout << "ingrese la fecha de nacimiento en el formato(dd/mm/yyyy) : " << endl;
            cin >> fecha;
            if(regex_match(fecha,comprobar))
            {
                this->fechaNacimiento = fecha;
                break;
            }else
            {
                cout << "Escriba la fecha en el formato requeridp" << endl;
            }
        }
        return;
    }

    void Persona::set_info() {
        set_nombre();
        set_fechaNacimiento();
    }

    void Persona::mostrar_info() {
        cout << "Nombre: " <<this->nombre << " Nacio el: " <<this->fechaNacimiento << endl;

    }





