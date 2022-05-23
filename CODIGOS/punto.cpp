#include "punto.h"
punto::punto()
{
    x = 0;
    y = 0;
    z = 0;
}

punto::~punto()
{
}

void punto::getPunto()
{
    cout << "COORDENADAS: X:" << x << ", Y:" << y << ", Z:" << z << endl;
}

void punto::setPunto(float _x, float _y, float _z){
    x = _x;
    y = _y;
    z = _z;
}