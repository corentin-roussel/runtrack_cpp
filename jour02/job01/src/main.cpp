#include <iostream>
#include "../header/main.hpp"


int main()
{
    Pingouin pingouin(10.50, 15.50, "Pingoo");

    pingouin.presenter();
    pingouin.marcher();
    pingouin.nager();
}