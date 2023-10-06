#pragma once
#include "Comun.h"

class CuentaBanco
{
public:
	CuentaBanco();
	~CuentaBanco();

	string dueño
		int opcion;

	void mostrardinero();
	void menu();
	void cuenta(string name, int number);


private:
	floar saldo = 0;
	void ajuste(int option, float arreglo);

};

