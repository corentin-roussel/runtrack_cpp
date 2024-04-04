#ifndef PINGOUIN
#define PINGOUIN

#include <iostream>
#include <vector>
#include <memory>

#include "Aquatique.hpp"
#include "Terrestre.hpp"

using std::vector, std::shared_ptr;

class Pingouin : public Aquatique, public Terrestre
{
private:
    double vitesseDeGlisse_ = 0;
    std::string nom_ = " ";
    static vector<shared_ptr<Pingouin>> pingouins;
public:
    Pingouin(double vitesseNage, double vitesseMarche, std::string nom, double vitesseDeGlisse);
    Pingouin(Pingouin& pingoo)
    {
        vitesseDeGlisse_ = pingoo.vitesseDeGlisse_;
        nom_ = pingoo.nom_;
    };
    ~Pingouin();
    void presenter();
    void nager() override;
    void marcher() override;
    void glisse();
    void static nombrePingouins();


    //GETTERS & SETTERS
    double getVitesseDeGlisse() { return vitesseDeGlisse_; };
    double setVitesseDeGlisse(double vitesseDeGlisse)  { return vitesseDeGlisse_ = vitesseDeGlisse; };
};

#endif