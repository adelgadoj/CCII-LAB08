#include <iostream>
#include "elipse.h"
using namespace std;
int main(){
    char n[] = "Elipse E1";
    char *nom = n;
    elipse e1("Azul", nom, 16.4 , 12.3);
    e1.imprimirE();
    e1.area();
    delete[]nom;
    return 0;
}