#ifndef AQUATIQUE
#define AQUATIQUE

#include <iostream>

class Aquatique
{
protected:
    double vitesseNage_;
public:
    Aquatique(double vitesseNage);
    virtual void nager();
};




#endif