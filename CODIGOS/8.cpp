#include <iostream>
#include "rectangulo.h"
#include <string.h>
using namespace std;
int main(){
    char nom[] = "Mesa";
    char *n = nom;
    forma uno("Marron",n);
    uno.imprimir();

    uno.setColor("Rojo");
    uno.imprimir();

    uno.cambiarPos(0.5,2,100);
    uno.imprimir();

    char rec[] = "Rectangulo R1";
    n = rec;
    rectangulo r1("Verde",n, 12 , 30);
    r1.imprimirR();

    r1.area();
    r1.perimetro();

    r1.setTamanio(0.5);
    r1.imprimirR();
    return 0;
}