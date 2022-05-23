#include <iostream>
#include "cuadrado.h"
using namespace std;
int main()
{
    char n[] = "Cuadrado C1";
    char *nom = n;
    cuadrado c1("Azul", nom, 22, 22);
    c1.imprimirR();
    c1.area();
    delete[] nom;
    return 0;
}