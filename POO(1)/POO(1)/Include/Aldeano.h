#pragma once
#include "Common.h"

class Aldeano
{
public:
	Aldeano();
	~Aldeano();

	void Aldeana(string name, int health, TipoObjetos item, TipodeAldeano type);

private:
	Gomi minigomi;
};

