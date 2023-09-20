#include "Command.h"

Command::Command()
{
}

Command::~Command()
{
}

void Command::comando(string command, TipodeAldeano &type)
{
	if (command == "Comun")
	{
		type = TipodeAldeano::Normal;
		cout << "El aldeano es normal" << endl;
	}
	else if (command == "Cana")
	{
		type = TipodeAldeano::Pescador;
		cout << "El aldeano es Luis" << endl;
	}
	else if (command == "Rayo")
	{
		type = TipodeAldeano::Bruja;
		cout << "El aldeano es una narizona" << endl;
	}
	else if (command == "Espada")
	{
		type = TipodeAldeano::TinaRusso;
		cout << "El aldeano es una pata sexy" << endl;
	}
	else if (command == "Libro")
	{
		type = TipodeAldeano::Bibliotecario;
		cout << "El aldeano es un bibliotecario" << endl;
	}
}

void Command::tradeo(string command, TipodeAldeano &type, TipoObjetos &item)
{
	if (type == TipodeAldeano::Normal)
	{
		if (command == "Pan")
		{
			item = TipoObjetos::Pan;
			cout << "Es tradeable el pan" << endl;
		}
	}
	else if (type == TipodeAldeano::Pescador)
	{
		if (command == "Pez")
		{
			item = TipoObjetos::Bacalao;
			cout << "Es tradeable el pescado" << endl;
		}
	}
	else if (type == TipodeAldeano::Bruja)
	{
		if (command == "Verruga")
		{
			item = TipoObjetos::Pocion;
			cout << "Es tradeable la pocion" << endl;
		}
	}
	else if (type == TipodeAldeano::TinaRusso)
	{
		if (command == "Hierro")
		{
			item = TipoObjetos::Armadura;
			cout << "Es tradeable la armadura" << endl;
		}
	}
	else if (type == TipodeAldeano::Bibliotecario)
	{
		if (command == "Hoja")
		{
					item = TipoObjetos::Libro;
					cout << "Es tradeable el libro" << endl;
		}
	}
}