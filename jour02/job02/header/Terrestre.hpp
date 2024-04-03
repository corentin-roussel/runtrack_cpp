#ifndef TERRESTRE
#define TERRESTRE

#include <iostream>

class Terrestre
{
private:
    double vitesseMarche_;
public:
    Terrestre(double vitesseMarche);
    virtual void marcher();
    
    double getVitesseMarche() { return vitesseMarche_; }
};

#endif