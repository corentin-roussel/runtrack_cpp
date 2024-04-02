#include <iostream>

void is_even()
{
    int user_input;

    std::cout << "Enter a number to know if it is even or uneven: ";
    std::cin >> user_input;

    if(user_input % 2 == 0)
    {
        std::cout << user_input << " is even";
    }
    else
    {
        std::cout << user_input << " is odd";
    }
}

int main()
{
    is_even();

    return 0;
}