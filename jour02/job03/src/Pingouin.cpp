#include "../header/Pingouin.hpp"


Pingouin::Pingouin(double vitesseNage, double vitesseMarche, std::string nom, double vitesseDeGlisse) : Aquatique(vitesseNage), Terrestre(vitesseMarche), nom_(nom), vitesseDeGlisse_(vitesseDeGlisse)
{
}


void Pingouin::presenter()
{
    std::cout << "Nuuut nuuuut!" << std::endl;
}

void Pingouin::nager()
{
    std::cout << "Je nage à une vitesse de pingouin de " << getVitesseNage() << " m/s." << std::endl;
}

void Pingouin::marcher()
{
    std::cout << "Je marche à une vitesse de pingouin de " << getVitesseMarche() << " m/s." << std::endl;
}

void Pingouin::glisse()
{
    std::cout << "Je glisse à une vitesse de pingouin de " << getVitesseDeGlisse() << " m/s." << std::endl;
}

