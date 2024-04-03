#include <iostream>

void swapValuesReference(int& number1,int& number2)
{
    int temp = number1;
    number1 = number2;
    number2 = temp;

    std::cout << number1 << std::endl;
    std::cout << number2 << std::endl;
}

int main()
{
    int a = 10;
    int b = 5;



    int& number1 = a;
    int& number2 = b;
    std::cout << number1 << std::endl;
    std::cout << number2 << std::endl;

    swapValuesReference(number1, number2);

    return 0;
}