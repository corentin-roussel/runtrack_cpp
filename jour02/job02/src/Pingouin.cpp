#include "../header/Pingouin.hpp"


Pingouin::Pingouin(double vitesseNage, double vitesseMarche, std::string nom) : Aquatique(vitesseNage), Terrestre(vitesseMarche), nom_(nom)
{
}


void Pingouin::presenter()
{
    std::cout << "Nuuut nuuuut!" << std::endl;
}

void Pingouin::nager()
{
    std::cout << "Je nage à une vitesse de pingouin de " << getVitesseNage << " m/s." << std::endl;
}

void Pingouin::marcher()
{
    std::cout << "Je marche à une vitesse de pingouin de " << getVitesseMarche << " m/s." << std::endl;
}


