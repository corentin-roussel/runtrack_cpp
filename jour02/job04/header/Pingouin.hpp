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
    double vitesseDeGlisse_ = 0.00;
    std::string nom_ = " ";
    double time_ = 0.00;
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
    void courseTime();
    void static displayTime();


    //GETTERS & SETTERS
    double getVitesseDeGlisse() { return vitesseDeGlisse_; };
    void setVitesseDeGlisse(double vitesseDeGlisse)  { vitesseDeGlisse_ = vitesseDeGlisse; };

    double getTime() { return time_; };
    void setTime(double time) { time_ = time; };
};

#endif