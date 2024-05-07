#include <iostream>

int main()
{
    double temp, r_temp;
    char unit, r_unit;

    std::cout << "F - Fahrenheit" << std::endl;
    std::cout << "C - Celcius" << std::endl;
    std::cout << "K - Kelvin" << std::endl;

    std::cout << "What unit would you like to use ?\n";
    std::cin >> unit;

    std::cout << "what unit would you like to convert to ?\n";
    std::cin >> r_unit;

    std::cout << "Enter the temperature: " << std::endl;
    std::cin >> temp;
    if ((unit == 'F' || unit == 'f') && (r_unit == 'c' || r_unit == 'C'))
    {
        r_temp = (temp - 32) * 5 / 9;
        std::cout << temp << unit << " = " << r_temp << r_unit << std::endl;
    }
    else if ((unit == 'C' || unit == 'c') && (r_unit == 'f' || r_unit == 'F'))
    {
        r_temp = (temp + 32) * 9 / 5;
        std::cout << temp << unit << " = " << r_temp << r_unit << std::endl;
    }
    else if ((unit == 'C' || unit == 'c') && (r_unit == 'k' || r_unit == 'K'))
    {
        r_temp = (temp + 273.15);
        std::cout << temp << unit << " = " << r_temp << r_unit << std::endl;
    }
    else if ((unit == 'F' || unit == 'f') && (r_unit == 'f' || r_unit == 'F'))
    {
        r_temp = ((temp - 32) * 5 / 9) + 273.15;
        std::cout << temp << unit << " = " << r_temp << r_unit << std::endl;
    }
    else if ((unit == 'K' || unit == 'k') && (r_unit == 'c' || r_unit == 'C'))
    {
        r_temp = (temp - 273.15);
        std::cout << temp << unit << " = " << r_temp << r_unit << std::endl;
    }
    else if ((unit == 'K' || unit == 'k') && (r_unit == 'f' || r_unit == 'F'))
    {
        r_temp = (temp - 273.15) * 9 / 5 + 32;
        std::cout << temp << unit << " = " << r_temp << r_unit << std::endl;
    }
    else
    {
        std::cout << temp << std::endl;
    }

    return 0;
}