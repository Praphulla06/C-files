#include <iostream>

int main()
{
    // Implicit Type Conversion
    int x = 3.14;
    std::cout << x << std::endl;

    char letter = 100;
    std::cout << letter << std::endl;

    // Explicit Type Conversion
    double y = 2.16;
    std::cout << (int)y << std::endl;

    int correct = 8;
    int questions = 10;
    double percentage = (double)correct / questions * 100;

    std::cout << percentage << "%";
    return 0;
}