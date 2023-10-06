#include "Vector3.h"

//Inicialization of the variables
Vector3::Vector3() : resulta(0.0f), resultb(0.0f), resultc(0.0f), a(0.0f), b(0.0f), c(0.0f)
{
}

Vector3::~Vector3()
{
}

void Vector3::setVector3(float _a, float _b, float _c)
{
    a = _a;
    b = _b;
    c = _c;
}

void Vector3::dotPro(Vector3 _vec)
{
    resulta = a * _vec.a;
    resultb = b * _vec.b;
    resultc = c * _vec.c;
    resulta = resulta + resultb + resultc;
}

void Vector3::crossPro (Vector3 _vec)
{
    resulta = (b * _vec.c) - (c * _vec.b);
    resultb = (c * _vec.a) - (a * _vec.c);
    resultc = (a * _vec.b) - (b * _vec.a);
}

void Vector3::Add     (Vector3 _vec)
{
    resulta = a + _vec.a;
    resultb = b + _vec.b;
    resultc = c + _vec.c;
}

void Vector3::Sub(Vector3 _vec)
{
    resulta = a - _vec.a;
    resultb = b - _vec.b;
    resultc = c - _vec.c;
}

void Vector3::Mul  (Vector3 _vec)
{
    resulta = a * _vec.a;
    resultb = b * _vec.b;
    resultc = c * _vec.c;
}

void Vector3::Div (Vector3 _vec)
{
    resulta = a / _vec.a;
    resultb = b / _vec.b;
    resultc = c / _vec.c;
}

void Vector3::Mag(Vector3 _vec)
{
    resulta = sqrt(a * _vec.a);
    resultb = sqrt(b * _vec.b);
    resultc = sqrt(c * _vec.c);
    resulta = resulta + resultb + resultc; 
}

void Vector3::Normal(Vector3 _vec)
{
    resulta = sqrt(a * _vec.a);
    resultb = sqrt(b * _vec.b);
    resultc = sqrt(c * _vec.c);
    resulta = resulta + resultb + resultc;

    resultb = (a / resulta, b / resulta, c / resultc); 
}