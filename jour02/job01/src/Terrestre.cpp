#include "../header/Terrestre.hpp"


Terrestre::Terrestre(double vitesseMarche) : vitesseMarche_(vitesseMarche)
{
}


void Terrestre::marcher()
{
    std::cout << "Je marche à une vitesse de " << vitesseMarche_ << " m/s." << std::endl;
}