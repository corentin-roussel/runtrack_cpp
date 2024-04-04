#include <iostream>
#include "../header/main.hpp"


int main()
{
    {
        Pingouin pingouin(2.00, 1.50, "Pingoo", 4.00);

        pingouin.presenter();
        pingouin.marcher();
        pingouin.nager();
        pingouin.glisse();

        Pingouin pingoo(3.00, 1.00, "Pingoo2", 3.50);
        pingoo.presenter();
        pingoo.nager();
        pingoo.marcher();
        pingoo.glisse();

        Pingouin pinguin(4.00, 0.20, "Pingoo3", 3.75);
        pinguin.presenter();
        pinguin.nager();
        pinguin.marcher();
        pinguin.glisse();

        Pingouin::displayTime();
       
    }


}
