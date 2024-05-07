#include <iostream>

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}
int main(void)
{
    int arr[] = {4, 2, 76, 12, -19, 89, 43, 123, 1342, -34, 543, -786, -4256, 654, 6574654, -7653, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, n);
    int smallest = 0;
    for (int i = 0; i < n; i++)
    {
        smallest = arr[i];
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < smallest)
            {
                smallest = arr[j];
                std::swap(arr[i], arr[j]);
            }
        }
    }
    std::cout << "\nThe sorted array is: " << std::endl;
    print_array(arr, n);
    return 0;
}