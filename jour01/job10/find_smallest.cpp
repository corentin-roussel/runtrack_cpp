#include <iostream>

using std::cout, std::cin, std::endl;

int* find_smallest(int* array[], int sizeArray)
{
     int* plusPetit = *(array); // Initialiser le pointeur du plus petit élément au premier élément du tableau

    for (int i = 1; i < sizeArray; i++) {
        if (*(array[i]) < *plusPetit) {
            plusPetit = (array[i]); // Mettre à jour le pointeur du plus petit élément si un élément plus petit est trouvé
        }
    }
    return plusPetit;
}

int main()
{

    int a = 5, b = 3, c = 7;
    int* array[] = {&a, &b, &c};

    int* smallest = find_smallest(array, 3);

    cout << *smallest;
    return 0;
}