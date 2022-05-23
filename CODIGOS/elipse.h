#include "forma.h"
class elipse : public forma
{
private:
    float rMayor;
    float rMenor;

public:
    elipse(string , char*, float, float);
    ~elipse();
    void imprimirE();
    void area();
};


