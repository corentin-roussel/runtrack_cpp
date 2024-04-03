#ifndef TERRESTRE
#define TERRESTRE

#include <iostream>

class Terrestre
{
protected:
    double vitesseMarche_;
public:
    Terrestre(double vitesseMarche);
    virtual void marcher();
    
};

#endif