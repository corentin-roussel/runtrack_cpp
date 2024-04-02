#include <iostream>

int average()
{
    int x;
    float sum;
    for(int i = 0; i < 5; i++)
    {   
        std::cout << "Enter a number please: ";
        std::cin >> x;
        sum += x;
    }
    
    return sum/5;
}

int main()
{
    std::cout << average();
    return 0;
}