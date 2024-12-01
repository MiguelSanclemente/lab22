#ifndef MENU_H
#define MENU_H
#include <string>
using namespace std;

class Menu {

public:
    Menu();

    void set_menuPrincipal();
    void set_menuCompra();
    void set_info();
    void mostrar_info() ;

    string menuPrincipal;
    string menuCompra;
};



#endif //MENU_H