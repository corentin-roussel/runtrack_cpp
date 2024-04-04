#include "../header/Pingouin.hpp"

vector<shared_ptr<Pingouin>> Pingouin::pingouins;

Pingouin::Pingouin(double vitesseNage, double vitesseMarche, std::string nom, double vitesseDeGlisse) : Aquatique(vitesseNage), Terrestre(vitesseMarche), nom_(nom), vitesseDeGlisse_(vitesseDeGlisse)
{
    pingouins.push_back(std::make_shared<Pingouin>(*this));
    std::cout << "Nouveau pingouin créé !" << std::endl;
}

Pingouin::~Pingouin()
    {
        for(auto index = pingouins.begin(); index < pingouins.end(); ++index)
        {
            if((*index).get() == this)
            {
                pingouins.erase(index);
                std::cout << "Pingouins détruit!!" << std::endl; 
            }
        }
    }

void Pingouin::nombrePingouins()
{
    std::cout << "Nombres de pingouins " <<  pingouins.size() << std::endl;;
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

