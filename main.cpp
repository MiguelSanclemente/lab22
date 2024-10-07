#include <iostream>
#include "Persona.h"
#include "Cliente.h"
#include "Empleado.h"
#include "Producto.h"
#include "Vector_Cliente.h"
#include "Vector_Empleado.h"
using namespace std;

int main() {
		Producto p;
		p.nombre();
		p.idProducto();
		p.cantidad();
		p.precio();
		p.fechaFabricacion();

    return 0;
}
