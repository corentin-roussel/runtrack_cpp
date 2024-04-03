#ifndef AQUATIQUE
#define AQUATIQUE

#include <iostream>

class Aquatique
{
private:
    double vitesseNage_;
public:
    Aquatique(double vitesseNage);
    virtual void nager();

    double getVitesseNage() { return vitesseNage_; }
};




#endif