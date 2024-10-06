#ifndef CLIENTE_H
#define CLIENTE_H
#include "Persona.h"




class Cliente: public Persona {
    public:
    Cliente();
    void set_idCliente();
    void set_dineroCliente();
    void set_info() override;
    void mostrar_info() override;
    int idCliente;
    double dineroCliente;


};



#endif //CLIENTE_H
