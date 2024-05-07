#include <iostream>

int main()
{
    std::string students[] = {"Spongebob", "Patrick", "Jenny", "Squidward"};
    int size = sizeof(students) / sizeof(students[0]);
    for (int i = 0; i < size; i++)
    {
        std::cout << students[i] << std::endl;
    }
    return 0;
}