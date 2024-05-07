#include <iostream>

int main()
{
    int temp;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    //   if (temp > 0 && temp < 30) // AND logical operator
    if (temp <= 0 || temp >= 30) // OR logical operator
    {
        std::cout << "The temperature is good!" << std::endl;
    }
    else
    {
        std::cout << "The temperature is bad!" << std::endl;
    }
    bool sunny = false ; 

    if (!sunny) // Logical Not
    {
        std::cout << "It is sunny outside!" << std::endl;
    }
    else
    {
        std::cout << "It is cloudy outside!" << std::endl;
    }
    return 0;
}