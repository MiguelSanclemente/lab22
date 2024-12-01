#ifndef MENU_H
#define MENU_H
#include <string>
#include "Factura.h"
using namespace std;

class Menu {

public:
    Menu();

    void set_menuPrincipal();
    void set_menuCompra();
    void set_ver_factura(Factura f);
    void set_info();
    void mostrar_info() ;

    string menuPrincipal;
    string menuCompra;
};



#endif //MENU_H