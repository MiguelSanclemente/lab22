#include "Vector_Producto.h"
#include "Funciones.h"
#include <iostream>
#include <vector>
using namespace std;


Vector_Producto::Vector_Producto() {}

vector <Producto> Vector_Producto::vector_producto;

bool Vector_Producto::comprobar(const int &id) {

    if(busqueda_binaria(Vector_Producto::vector_producto, id) != -1)
    {
        return true;
    }
    return false;
}

void Vector_Producto::añadir() {

    Producto obj;
    obj.set_info();
    while(comprobar(obj.id) == true) {
        cout << "El id que ingresaste ya se encuentra en uso :( " << endl;
        cin >> obj.id;
    }
    Vector_Producto::vector_producto.push_back(obj);
}

void Vector_Producto::actualizar() {

    int id;
    cout << "Ingrese el id del producto que desea actualizar: "<< endl;
    cin >> id;
    cin.ignore();
    int resultado = busqueda_binaria(Vector_Producto::vector_producto, id);
    if(resultado == -1)
    {
        cout << "Se encontro el producto a actualizar. " << endl;
        Vector_Producto::vector_producto[resultado].set_info();
        return;
    }else {
        cout << "No se encontro producto a actualizar. "<< endl;
    }
}

void Vector_Producto::mostrar() {

    for(auto a: Vector_Producto::vector_producto) {
        a.mostrar_info();
    }
    return;
}

void Vector_Producto::eliminar() {

    int id;
    cout << "Ingrese el id que desea eliminar: "<< endl;
    cin >> id;
    cin.ignore();
    int resultado = busqueda_binaria(Vector_Producto::vector_producto, id);
    if(resultado == -1) {

        Vector_Producto::vector_producto.erase(Vector_Producto::vector_producto.begin() + resultado);
        cout << "Se elimino el producto correctamente." << endl;
        return;
    }else
        cout << "No se encontro el producto a eliminar." << endl;
    return;
}


