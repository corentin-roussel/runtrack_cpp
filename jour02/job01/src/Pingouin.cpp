#include "../header/Pingouin.hpp"
#include "Pingouin.hpp"


Pingouin::Pingouin(double vitesseNage, double vitesseMarche, std::string nom) : Aquatique(vitesseNage), Terrestre(vitesseMarche), nom_(nom)
{
}


void Pingouin::presenter()
{
    std::cout << "Nuuut nuuuut!" << std::endl;
}

void Pingouin::nager()
{
    std::cout << "Je nage à une vitesse de pingouin de " << vitesseNage_ << " m/s." << std::endl;
}

void Pingouin::marcher()
{
    std::cout << "Je marche à une vitesse de pingouin de " << vitesseMarche_ << " m/s." << std::endl;
}

