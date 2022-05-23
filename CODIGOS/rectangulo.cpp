#include "rectangulo.h"
rectangulo::rectangulo(string _color, char *_nombre, float _lm, float _lM) : forma(_color, _nombre)
{
    lMenor = _lm;
    lMayor = _lM;
}
rectangulo::~rectangulo()
{
}

void rectangulo::imprimirR()
{
    imprimir();
    if(lMayor == lMenor){
        cout << "FORMA: Cuadrado" << endl;
        cout << "LADO MAYOR: " << lMayor << endl;
        cout << "LADO MENOR: " << lMenor << endl;
    }
    else{
        cout << "FORMA: Rectangulo" << endl;
        cout << "LADO MAYOR: " << lMayor << endl;
        cout << "LADO MENOR: " << lMenor << endl;
    }
    
}
void rectangulo::area(){
    float A;
    A = lMenor * lMayor;
    cout<<"AREA: "<<A<<endl;
}
void rectangulo::perimetro(){
    float P;
    P = (2*(lMenor) + 2*(lMayor));
    cout<<"PERIMETRO: "<<P<<endl;
}
void rectangulo::setTamanio(float factor){
    lMayor = lMayor*factor;
    lMenor = lMenor*factor;
}