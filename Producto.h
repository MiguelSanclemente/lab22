#ifndef PRODUCTO_H
#define PRODUCTO_H
using namespace std;

#include <string>

class Producto {
private:
    int idProducto;
    string nombre;
    int cantidad;
    double precioVenta;
    string fechaFabricacion;

public:
    // Constructor
    Producto(int id, string nombre, int cantidad, double precio, string fechaFab);

    // Getters y Setters
    int getIdProducto();
    void setIdProducto(int id);
    string getNombre();
    void setNombre(string nombre);
    int getCantidad();
    void setCantidad(int cantidad);
    double getPrecioVenta();
    void setPrecioVenta(double precio);
    string getFechaFabricacion();
    void setFechaFabricacion(string fechaFab);

    // Método para mostrar producto
    void mostrarProducto();
};

#endif
