#pragma once
#include "Common.h"

class Vector2
{
public:
	Vector2();
	~Vector2();

	void setVector2(float _a, float _b); 

	void dotPro(Vector2 _vec);

	
	float crossPro (Vector2 _vec); 

	void Add (Vector2 _vec); 

	void Sub(Vector2 _vec); 

	void Mul (Vector2 _vec); 

	void Div (Vector2 _vec); 

	void Mag (Vector2 _vec);

	void Normal(Vector2 _vec); 

	float a;
	float b;
	float resulta;
	float resultb; 

private:

};