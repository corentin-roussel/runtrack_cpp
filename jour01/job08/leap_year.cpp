#include <iostream>

using std::cout, std::endl, std::cin;

void leap_year()
{
    int year;
    cout << "Enter a year :";
    cin >> year;

    if((year % 4) == 0 && (year % 100) != 0)
    {
        cout << year << " is a leap year" << endl;
    }
    else{
        cout << year << " is not a leap year" << endl;
    }
}

int main()
{
    leap_year();

    return 0;
}