#include <iostream>

using std::cout, std::cin, std::endl;

int find_smallest(int *array, int sizeArray)
{
    int smallest_int = 1000000;
    while(*array != 0)
    {
        if(*array < smallest_int)
        {
            smallest_int = *array;
        }
        *array++;
    }
    return smallest_int;
}

int main()
{

    int array1[5] = {100, 14, 20, 35, 42};

    cout << find_smallest(array1, sizeof(array1));
    return 0;
}