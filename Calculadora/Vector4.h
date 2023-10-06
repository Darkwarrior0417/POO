#pragma once
#include "Common.h"

class Vector4
{
public:
	Vector4();
	~Vector4();

	void setVector4(float _a, float _b, float _c, float _d);

	void dotPro(Vector4 _vec);

	void crossPro(Vector4 _vec);

	void Add (Vector4 _vec);

	void Sub(Vector4 _vec);

	void Mul  (Vector4 _vec);

	void Div (Vector4 _vec);

	void Mag(Vector4 _vec);

	void Normal(Vector4 _vec);

	float a;
	float b;
	float c;
	float d;
	float resulta;
	float resultb;
	float resultc;
	float resultd;

private:

};