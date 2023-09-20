#pragma once
#include "Common.h"
#include "Aldeano.h"

class Command
{
public:
	Command();
	~Command();

	void comando(string command, TipodeAldeano &type);
	void tradeo(string command, TipodeAldeano &type, TipoObjetos &item);
	

private:

};
