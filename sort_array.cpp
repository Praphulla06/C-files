#include <iostream>

int main()
{
    int array[] = {323, 1, -1, 43, -32, 901, 23, 12};
    int size = sizeof(array) / sizeof(array[0]);
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (int element : array)
    {
        std::cout << element << " ";
    }
    return 0;
}