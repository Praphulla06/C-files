#include <iostream>

int main()
{
    char op;
    float num1, num2, result;

    std::cout << "************CALCULATOR************" << std::endl;

    std::cout << "Enter either (+, -, *, /): " << std::endl;
    std::cin >> op;

    std::cout << "Enter first number: " << std::endl;
    std::cin >> num1;

    std::cout << "Enter second number: " << std::endl;
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;

    default:
        std::cout << "Enter a valid operator!" << std::endl;
        return -1;
    }

    std::cout << "Result: " << result << std::endl;
    return 0;
}