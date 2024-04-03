#include "../header/Aquatique.hpp"


Aquatique::Aquatique(double vitesseNage) : vitesseNage_(vitesseNage)
{
}


void Aquatique::nager()
{
    std::cout << "Je nage à une vitesse de " << vitesseNage_ << " m/s." << std::endl;
}
