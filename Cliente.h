#ifndef CLIENTE_H
#define CLIENTE_H
#include "Persona.h"




class Cliente: public Persona {
    public:
    Cliente();

    void set_menuCliente();
    void set_idCliente();
    void set_dineroCliente();
    void set_info() override;
    void mostrar_info() override;
    int id;
    double dineroCliente;
    static int id_global;

    string menuCliente;



};



#endif //CLIENTE_H
