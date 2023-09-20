#pragma once
#include <iostream>
#include <string>

using namespace std;

enum TipodeAldeano
{
	Normal = 1,
	Pescador = 2,
	Bruja = 3,
	TinaRusso = 4,
	Bibliotecario = 5,
};

enum TipoObjetos
{
	Pan = 1,
	Bacalao = 2,
	Pocion = 3,
	Armadura = 4,
	Libro = 5,
};

struct Gomi
{
	string nombre;
	int salud;
	TipoObjetos objeto;
	TipodeAldeano tipo;
};

