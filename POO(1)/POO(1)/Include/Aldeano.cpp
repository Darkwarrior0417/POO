#include "Aldeano.h"
#include "Common.h"

Aldeano::Aldeano()
{
}

Aldeano::~Aldeano()
{
}

void Aldeano::Aldeana(string name, int health, TipoObjetos item, TipodeAldeano type)
{
	minigomi.nombre = name;
	minigomi.salud = health;
	minigomi.objeto = item;
	minigomi.tipo = type;
}

