#include <iostream>

struct Car
{
    std::string model;
    int year;
    std::string color;
};
void printCar(Car car);
void paintCar(Car &car, std::string color);
int main()
{
    int num = 2;
    Car car[num];
    for (int i = 0; i < num; i++)
    {
        std::cout << "Enter Model: ";
        std::getline(std::cin, car[i].model);
        std::cout << "Enter year: ";
        std::cin >> car[i].year;
        std::cout << "Enter color: ";
        std::getline(std::cin >> std::ws, car[i].color);
        std::cout << '\n';
    }

    paintCar(car[0], "Black");

    for (int i = 0; i < num; i++)
    {
        std::cout << &car[i] << std::endl;
        printCar(car[i]);
    }

    return 0;
}

void printCar(Car car) // Passing by value not reference
{
    std::cout << &car << std::endl;

    std::cout << "Model: " << car.model << std::endl;
    std::cout << "Year: " << car.year << std::endl;
    std::cout << "Color: " << car.color << std::endl;
    std::cout << '\n';
}

void paintCar(Car &car, std::string color) // Passing by reference
{
    car.color = color;
}