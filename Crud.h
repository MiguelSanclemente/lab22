#ifndef CRUD_H
#define CRUD_H
using namespace std;

namespace Crud {

class Crud {
public:
    virtual void añadir() = 0;
    virtual  void actualizar() = 0;
    virtual void mostrar() = 0;
    virtual void eliminar() = 0;


};

} // crud

#endif //CRUD_H
