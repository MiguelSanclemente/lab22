#ifndef VECTOR_CLIENTE_H
#define VECTOR_CLIENTE_H
#include "Crud.h"
#include "Cliente.h"
#include <vector>


class Vector_Cliente: public Crud
{
	public:
	Vector_Cliente();
	void añadir() override;
	void actualizar() override;
	void mostrar() override;
	void eliminar() override;
	bool comprobar(const int& id);
	vector <Cliente> vector_cliente;
};


#endif //VECTOR_CLIENTE_H
