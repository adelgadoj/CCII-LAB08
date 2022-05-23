#include <iostream>
#include "circulo.h"
using namespace std;
int main()
{
    char n[] = "Circulo C1";
    char *nom = n;
    circulo c1("Amarillo", nom, 15, 15);
    c1.imprimirE();
    c1.area();
    delete[] nom;
    return 0;
}