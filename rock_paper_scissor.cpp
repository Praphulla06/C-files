#include <iostream>
#include <ctime>
char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{

    char player;
    char computer;
    player = getUserChoice();
    std::cout << "You chose ";
    showChoice(player);
    computer = getComputerChoice();
    std::cout << "Computer chose ";
    showChoice(computer);
    chooseWinner(player, computer);
    return 0;
}

char getUserChoice()
{
    char userChoice;
    do
    {
        std::cout << "Enter \n1.r For Rock\n2.p For Paper\n3.s For Scissor" << std::endl;
        std::cin >> userChoice;
    } while (userChoice != 'r' && userChoice != 'p' && userChoice != 's');

    return userChoice;
}
char getComputerChoice()
{
    srand(time(0));
    char computer;
    int choiceValue = rand() % 3 + 1;

    switch (choiceValue)
    {
    case 1:
        computer = 'r';
        break;
    case 2:
        computer = 'p';
        break;
    case 3:
        computer = 's';
        break;

    default:
        break;
    }
    return computer;
}
void showChoice(char player)
{
    switch (player)
    {
    case 'r':
        std::cout << "Rock" << std::endl;
        break;
    case 'p':
        std::cout << "Paper" << std::endl;
        break;
    case 's':
        std::cout << "Scissor" << std::endl;
        break;

    default:
        std::cout << "Unexpected Error Occured!" << std::endl;
        break;
    }
}

void chooseWinner(char player, char computer)
{
    if (player == computer)
    {
        std::cout << "Draw" << std::endl;
    }
    else if ((player == 'r' && computer == 's') || (player == 's' && computer == 'p') || (player == 'p' && computer == 's'))
    {
        std::cout << "Player Wins" << std::endl;
    }
    else
    {
        std::cout << "Computer Wins" << std::endl;
    }
}