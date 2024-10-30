#include "Vector_Cliente.h"
#include "Funciones.h"
#include <iostream>
#include <vector>
using namespace std;


Vector_Cliente::Vector_Cliente(){}

bool Vector_Cliente::comprobar(const int &id)
{
	if(busqueda_binaria(this->vector_cliente,id) != -1)
	{
		return true;
	}
	return false;
}
void Vector_Cliente::añadir()
{
	Cliente obj;
	obj.set_info();
	while (comprobar(obj.id) == true )
	{
		cout << "El id que usted ingreso ya se encuentra en uso: " << endl;
		obj.set_idCliente();
	}
	this->vector_cliente.push_back(obj);
}

void Vector_Cliente::actualizar()
{

	int id;
	cout << "ingrese el id del cliente que quiere actualizar" << endl;
	cin >> id;
	cin.ignore();
	int resultado = busqueda_binaria(this->vector_cliente,id);
	if (resultado != -1)
	{
		cout << "se encontro el cliente a actualizar" << endl;
		this->vector_cliente[resultado].set_info();
		return;
	}else
	{
		cout << "no se encontro cliente a actualizar" << endl;
	}
}

void Vector_Cliente::mostrar() 
{
	for(auto a: this->vector_cliente)
	{
		a.mostrar_info();
	}
	return;
}

void Vector_Cliente::eliminar()
{
	int id;
	cout << "ingrese el id que va a eliminar" << endl;
	cin >> id;
	cin.ignore();
	int resultado = busqueda_binaria(this->vector_cliente,id);
	if(resultado != -1)
	{	
		this->vector_cliente.erase(this->vector_cliente.begin() + resultado);
		cout << "se elimino el cliente correctamente" << endl;
		return;
	}else 
		cout << "no se encontro el cliente a eliminar" << endl;
	return;
}
