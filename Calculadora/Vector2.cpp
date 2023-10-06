#include "Vector2.h"


Vector2::Vector2() : resulta(0.0f), resultb(0.0f), a(0.0f), b(0.0f)
{
}

Vector2::~Vector2()
{
}


void Vector2::setVector2(float _a, float _b)
{
    a = _a;
    b = _b;
}

void Vector2::dotPro(Vector2 _vec)
{
    resulta = a * _vec.a;
    resultb = b * _vec.b;

    resulta = resulta + resultb;
}

float Vector2::crossPro (Vector2 _vec)
{
    return ((a * _vec.b) - (b * _vec.a));
}

void Vector2::Add (Vector2 _vec)
{
    resulta = a + _vec.a;
    resultb = b + _vec.b;
}

void Vector2::Sub (Vector2 _vec)
{
    resulta = a - _vec.a;
    resultb = b - _vec.b;
}

void Vector2::Mul  (Vector2 _vec)
{
    resulta = a * _vec.a;
    resultb = b * _vec.b;
}

void Vector2::Div (Vector2 _vec)
{
    resulta = a / _vec.a;
    resultb = b / _vec.b;
}

void Vector2::Mag (Vector2 _vec)
{
    resulta = sqrt(a * _vec.a);
    resultb = sqrt(b * _vec.b);
    resulta = resulta + resultb; 
}

void Vector2::Normal (Vector2 _vec)
{
    resulta = sqrt(a * _vec.a);
    resultb = sqrt(b * _vec.b);
    resulta = resulta + resultb;

    resultb = (a / resulta, b / resulta); 
}