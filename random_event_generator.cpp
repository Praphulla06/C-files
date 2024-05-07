#include <iostream>
#include <ctime>
int main()
{

    srand(time(0));

    for (int i = 0; i < 10; i++)
    {
        int randNum = rand() % 5 + 1;

        switch (randNum)
        {
        case 1:
            std::cout << "You win a book" << std::endl;
            break;
        case 2:
            std::cout << "You win a football" << std::endl;
            break;
        case 3:
            std::cout << "You win a guitar" << std::endl;
            break;
        case 4:
            std::cout << "You win a fountain pen" << std::endl;
            break;
        case 5:
            std::cout << "You win a charger" << std::endl;
            break;

        default:
            break;
        }
    }
    return 0;
}