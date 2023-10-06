#pragma once
#include "Common.h"

class App
{
public:
	App();
	~App();

	void menu();

	void Vector2opciones();
	void Vector3opciones();
	void Vector4opciones();

	void printVector2();
	void printVector3();
	void printVector4();

	int opc = 0;

private:

};