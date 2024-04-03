#ifndef PINGOUIN
#define PINGOUIN

#include "Aquatique.hpp"
#include "Terrestre.hpp"

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
};

#endif