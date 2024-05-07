#include <iostream>

int searchArray(int array[], int size, int target);

int main()
{
    int array[] = {4, 3, 81, 7, 1, 91};
    int size = sizeof(array) / sizeof(array[0]);
    int target = 91;
    int index = searchArray(array, size, target);

    std::cout << "Element was found in index " << index << std::endl;
    return 0;
}

int searchArray(int array[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == target)
        {
            return i;
        }
    }
    return -1;
}