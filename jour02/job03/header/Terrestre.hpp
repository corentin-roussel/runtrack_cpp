#ifndef TERRESTRE
#define TERRESTRE

#include <iostream>

class Terrestre
{
private:
    double vitesseMarche_ = 0;
public:
    Terrestre(){};
    Terrestre(double vitesseMarche);
    virtual void marcher();
    
    double getVitesseMarche() { return vitesseMarche_; }
    double setVitesseMarche(double vitesseMarche) { return vitesseMarche_ = vitesseMarche; };
};

#endif