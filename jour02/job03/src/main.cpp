#include <iostream>
#include "../header/main.hpp"


int main()
{
    Pingouin pingouin(10.50, 15.50, "Pingoo", 10.50);

    pingouin.presenter();
    pingouin.marcher();
    pingouin.nager();
    pingouin.glisse();
    

    Pingouin pingoo = pingouin;
    pingoo.setVitesseDeGlisse(20);
    pingoo.setVitesseMarche(5.50);
    pingoo.setVitesseNage(15.50);

    pingoo.nager();
    pingoo.marcher();
    pingoo.glisse();
}
