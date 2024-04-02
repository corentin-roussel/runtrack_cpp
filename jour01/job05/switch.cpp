#include <iostream>

void swap(int number1, int number2)
{
    int temp;
    temp = number1;
    number1 = number2;
    number2 = temp;

    std::cout << "Num1: " << number1 << '\n';
    std::cout << "Num2: " << number2 << '\n';
}

int main()
{
    int number1 = 5;
    int number2 = 10;

    std::cout << "Num1: " << number1 << '\n';
    std::cout << "Num2: " << number2 << '\n';

    swap(number1, number2);
    return 0;
}