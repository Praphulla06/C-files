#include <iostream>
#include <ctime>
void drawBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player, char computer);
bool checkTie(char *spaces);

int main()
{
    char spaces[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(spaces);
    while (running)
    {
        playerMove(spaces, player);
        drawBoard(spaces);

        if (checkWinner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if(checkTie(spaces))
        {
            running = false;
            break;
        }
        computerMove(spaces, computer);
        drawBoard(spaces);

        if (checkWinner(spaces, player, computer))
        {
            running = false;
            break;
        }
        else if(checkTie(spaces))
        {
            running = false;
            break;
        }
    }
    return 0;
}

void drawBoard(char *spaces)
{
    std::cout << '\n';
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << std::endl;
    std::cout << "_____|_____|_____" << std::endl;
    std::cout << "     |     |     " << std::endl;
    std::cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << std::endl;
    std::cout << "     |     |     " << std::endl;
}
void playerMove(char *spaces, char player)
{
    int number;
    do
    {
        std::cout << "Enter a number spot to place a marker (1-9): " << std::endl;
        std::cin >> number;
        number--;
        if (spaces[number] == ' ')
        {
            spaces[number] = player;
        }
    } while (number <= 0 || number >= 9);
}
void computerMove(char *spaces, char computer)
{
    int number;
    srand(time(NULL));

    while (true)
    {
        number = rand() % 9;
        if (spaces[number] == ' ')
        {
            spaces[number] = computer;
            break;
        }
    }
}
bool checkWinner(char *spaces, char player, char computer)
{
    if(spaces[0] != ' ' &&  (spaces[0] == spaces[1] && spaces[1] == spaces[2]))
    {
        spaces[0] == player ? std::cout << "You Win!" << std::endl : std::cout << "You lose!" << std::endl; 
    }
    else if(spaces[3] != ' ' &&  (spaces[3] == spaces[4] && spaces[3] == spaces[5]))
    {
        spaces[3] == player ? std::cout << "You Win!" << std::endl : std::cout << "You lose!" << std::endl; 
    }
    else if(spaces[6] != ' ' &&  (spaces[6] == spaces[7] && spaces[6] == spaces[8]))
    {
        spaces[6] == player ? std::cout << "You Win!" << std::endl : std::cout << "You lose!" << std::endl; 
    }
    else if(spaces[0] != ' ' &&  (spaces[0] == spaces[4] && spaces[0] == spaces[8]))
    {
        spaces[0] == player ? std::cout << "You Win!" << std::endl : std::cout << "You lose!" << std::endl; 
    }
    else if(spaces[2] != ' ' &&  (spaces[2] == spaces[4] && spaces[2] == spaces[6]))
    {
        spaces[2] == player ? std::cout << "You Win!" << std::endl : std::cout << "You lose!" << std::endl; 
    }
    else if(spaces[0] != ' ' &&  (spaces[0] == spaces[3] && spaces[0] == spaces[6]))
    {
        spaces[0] == player ? std::cout << "You Win!" << std::endl : std::cout << "You lose!" << std::endl; 
    }
    else if(spaces[1] != ' ' &&  (spaces[1] == spaces[4] && spaces[1] == spaces[7]))
    {
        spaces[1] == player ? std::cout << "You Win!" << std::endl : std::cout << "You lose!" << std::endl; 
    }
    else if(spaces[2] != ' ' &&  (spaces[2] == spaces[5] && spaces[2] == spaces[8]))
    {
        spaces[2] == player ? std::cout << "You Win!" << std::endl : std::cout << "You lose!" << std::endl; 
    }
    else
    {
        return false;
    }
    return true;
}
bool checkTie(char *spaces)
{
    for(int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
        }

    }
    std::cout << "It's a tie!" << std::endl; 
    return true;
}
