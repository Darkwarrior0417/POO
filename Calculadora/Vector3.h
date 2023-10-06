#pragma once
#include "Common.h"

class Vector3
{
public:
	Vector3();
	~Vector3();

	void setVector3(float _a, float _b, float _c); 

	void dotPro(Vector3 _vec);

	void crossPro(Vector3 _vec);

	void Add (Vector3 _vec);

	void Sub(Vector3 _vec);

	void Mul (Vector3 _vec);

	void Div (Vector3 _vec);

	void Mag(Vector3 _vec);

	void Normal(Vector3 _vec);

	float a;
	float b;
	float c;
	float resulta;
	float resultb;
	float resultc; 


private:

};