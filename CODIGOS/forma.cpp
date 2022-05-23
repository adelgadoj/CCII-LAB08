#include "forma.h"

forma::forma(string _color, char *_nombre)
{
    color = _color;
    nombre = _nombre;
    cordenada.setPunto(0,0,0);
}
forma::~forma()
{
}
void forma::imprimir()
{
    cout << "\nNOMBRE: " << nombre << endl;
    cout << "COLOR : " << color << endl;
    cordenada.getPunto();
}
void forma::setColor(string _color)
{
    color = _color;
}
string forma::getColor()
{
    return color;
}
void forma::cambiarPos(float _x, float _y, float _z)
{
    cordenada.setPunto(_x,_y,_z);
}