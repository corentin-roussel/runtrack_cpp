#ifndef PINGOUIN
#define PINGOUIN

#include "Aquatique.hpp"
#include "Terrestre.hpp"

class Pingouin : public Aquatique, public Terrestre
{
private:
    double vitesseDeGlisse;
    std::string nom_;
    
public:
    Pingouin(double vitesseNage, double vitesseMarche, std::string nom);
    Pingouin(const Pingouin& pingouinConstructor)
    {
        vitesseDeGlisse = pingouinConstructor.vitesseDeGlisse;
    }
    void presenter();
    void nager() override;
    void marcher() override;

};

#endif