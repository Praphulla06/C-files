#include <iostream>

void showBalance(float balance);
float deposit(float balance);
float withdraw(float balance);

int main()
{
    float balance = 0;

    int choice;
    do
    {
        std::cout << "Enter your choice: " << std::endl;
        std::cout << " 1. Show Balance\n 2. Deposit Money\n 3. Withdraw Money\n 4. Exit" << std::endl;
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance = deposit(balance);
            break;
        case 3:
            balance = withdraw(balance);
            break;
        case 4:
            exit(0);
        default:
            std::cout << "Enter a valid choice: " << std::endl;
            break;
        }
    } while (choice != 4);

    return 0;
}

float deposit(float balance)
{
    float deposit_amount;
    std::cout << "Enter the amount of money you want to deposit: " << std::endl;
    std::cin >> deposit_amount;
    balance += deposit_amount;
    std::cout << "You have successfully deposited $" << deposit_amount << std::endl;
    return balance;
}

float withdraw(float balance)
{
    float withdraw_amount;
    std::cout << "Enter the amount of money you want to withdraw: " << std::endl;
    std::cin >> withdraw_amount;
    if (withdraw_amount > balance)
    {
        std::cout << "Insufficient Balance!" << std::endl;
    std::cout << "You current balance is $" << balance << std::endl; 
        return 0;
    }
    else
    {
        balance -= withdraw_amount;
        return balance;
    }
}

void showBalance(float balance)
{
    std::cout << "Your current balance is: $" << balance << std::endl;
}