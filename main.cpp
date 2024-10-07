#include <iostream>

#include "Cliente.h"
#include "Empleado.h"
#include "Persona.h"
#include "Vector_Cliente.h"
#include "Vector_Empleado.h"
using namespace std;

int main() {
		Vector_Empleado v;
		v.añadir();
		v.añadir();
		v.mostrar();
		v.eliminar();
		v.mostrar();

    return 0;
}
