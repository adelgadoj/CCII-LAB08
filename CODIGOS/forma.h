#include <iostream>
#include "punto.h"
using namespace std;
class forma
{
private:
    string color;
    punto cordenada;
    char * nombre;
public:
    forma(string , char*);
    ~forma();
    void imprimir();
    void setColor(string);
    string getColor();
    void cambiarPos(float,float,float);
};

