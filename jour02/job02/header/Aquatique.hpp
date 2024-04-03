#ifndef AQUATIQUE
#define AQUATIQUE

#include <iostream>

class Aquatique
{
private:
    double vitesseNage_ = 0;
public:
    Aquatique(){};
    Aquatique(double vitesseNage);
    virtual void nager();
    double getVitesseNage() { return vitesseNage_; };
    double setVitesseNage(double vitesseNage) { return vitesseNage_ = vitesseNage; };
};




#endif