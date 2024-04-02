#include <iostream>


void revert_number()
{
    int sequence_number;
    int sequence_number_inversed;
    int temp;

    std::cout << "Enter a sequence of number: ";
    std::cin >> sequence_number;

    while (sequence_number != 0) {
        sequence_number_inversed = sequence_number_inversed * 10 + sequence_number % 10;
        sequence_number /= 10;
    }

     std::cout << "Le nombre inverse est : " << sequence_number_inversed << std::endl;

}

int main()
{
    revert_number();
    return 0;
}