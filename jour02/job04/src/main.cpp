#include <iostream>
#include "../header/main.hpp"


int main()
{
    {
        Pingouin pingouin(10.50, 15.50, "Pingoo", 10.50);

        pingouin.presenter();
        pingouin.marcher();
        pingouin.nager();
        pingouin.glisse();

        Pingouin pingoo(5.50, 20.50, "Pingoo2", 17.45);
        pingoo.presenter();
        pingoo.nager();
        pingoo.marcher();
        pingoo.glisse();

        Pingouin::nombrePingouins();
    }

    Pingouin::nombrePingouins();
}
