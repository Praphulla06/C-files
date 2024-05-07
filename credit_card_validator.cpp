#include <iostream>

std::string getUserInput();
bool checkCardValidation(std::string cardNumber);
int main()
{
    if (checkCardValidation(getUserInput()))
    {
        std::cout << "The card is valid!" << std::endl;
        return 0;
    }
    std::cout << "The card is not valid!" << std::endl;
    return -1;
}

std::string getUserInput()
{
    std::string cardNumber;
    int cardLength;
    std::cout << "Enter the card number: " << std::endl;
    std::cin >> cardNumber;
    cardLength = cardNumber.length();

    return cardNumber;
}

bool checkCardValidation(std::string cardNumber)
{

    int cardLength = cardNumber.length() - 2;

    int validationNumber = 0;
    for (int i = cardLength; i >= 0; i -= 2)
    {
        float temp_value = (cardNumber[i] - '0') * 2;
        if (temp_value > 9)
        {
            temp_value -= 9;
        }
        validationNumber += temp_value;
    }
    for (int i = cardLength + 1; i >= 0; i -= 2)
    {
        validationNumber += (cardNumber[i] - '0');
    }

    if (validationNumber % 10 == 0)
    {
        return true;
    }
    return false;
}