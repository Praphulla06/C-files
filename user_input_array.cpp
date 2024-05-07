#include <iostream>

int main()
{
    std::string foods[5];
    std::string temp;
    int size = sizeof(foods) / sizeof(foods[0]);

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter the name of the food or enter 'q' to quit: " << std::endl;
        std::getline(std::cin, temp);
        if (temp == "q")
        {
            break;
        }
        else
        {
            foods[i] = temp;
        }
    }

    std::cout << "List of Food: " << std::endl;
    for (int i = 0; !foods[i].empty(); i++)
    {

        std::cout << foods[i] << std::endl;
    }
    return 0;
}