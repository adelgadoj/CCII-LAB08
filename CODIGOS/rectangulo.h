#include "forma.h"
#include <iostream>
using namespace std;
class rectangulo : public forma
{
private:
    int lMenor;
    int lMayor;
public:
    rectangulo(string , char*, float, float);
    ~rectangulo();
    void imprimirR();
    void area();
    void perimetro();
    void setTamanio(float);
};
