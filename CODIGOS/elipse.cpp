#include "elipse.h"
elipse::elipse(string _color, char *_nombre, float rM, float rm) : forma(_color, _nombre)
{
    rMayor = rM;
    rMenor = rm;
}

elipse::~elipse()
{
}
void elipse::area()
{
    float a;
    a = 3.14 * (rMayor * rMenor);
    cout << "AREA: " << a << endl;
}
void elipse::imprimirE(){
    imprimir();
    if(rMayor == rMenor) cout<<"FORMA: Circulo"<<endl;
    else{
        cout << "FORMA: Elipse" << endl;
    }
}