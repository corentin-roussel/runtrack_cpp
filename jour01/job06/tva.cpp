
#include <iostream>

void calculate_tva()
{
    float price_without_taxes;
    float kilogram;
    float taxes = 20;
    float price_with_taxes;
    std::cout << "Enter the price of the fruit or vegetables without taxes: ";
    std::cin >> price_without_taxes;

    std::cout << "Enter the weight in kg of the article: ";
    std::cin >> kilogram;

    price_with_taxes =  (price_without_taxes * kilogram) * (1 + (taxes / 100));
    std::cout << price_with_taxes;
}

int main()
{

    calculate_tva();
    return 0;
}