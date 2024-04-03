#ifndef PINGOUIN
#define PINGOUIN

#include "Aquatique.hpp"
#include "Terrestre.hpp"

class Pingouin : public Aquatique, public Terrestre
{
protected:
    std::string nom_;
public:
    Pingouin(double vitesseNage, double vitesseMarche, std::string nom);
    void presenter();
    void nager() override;
    void marcher() override;

};

#endif