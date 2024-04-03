#ifndef PINGOUIN
#define PINGOUIN

#include <iostream>
#include <vector>

#include "Aquatique.hpp"
#include "Terrestre.hpp"

using std::vector;

class Pingouin : public Aquatique, public Terrestre
{
private:
    double vitesseDeGlisse_ = 0;
    std::string nom_ = " ";
public:
    Pingouin(double vitesseNage, double vitesseMarche, std::string nom, double vitesseDeGlisse);
    Pingouin(Pingouin& pingoo)
    {
        vitesseDeGlisse_ = pingoo.vitesseDeGlisse_;
        nom_ = pingoo.nom_;
    };
    void presenter();
    void nager() override;
    void marcher() override;
    void glisse();
    double getVitesseDeGlisse() { return vitesseDeGlisse_; };
    double setVitesseDeGlisse(double vitesseDeGlisse)  { return vitesseDeGlisse_ = vitesseDeGlisse; };

    // static vector<Pingouin> Pingouin;
};

#endif