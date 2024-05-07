#include <iostream>
#include <queue> //Queue is included for queue data type in Cpp
#include <stack>

// Function Overlaoding
void printBinaryValue(std::queue<int> binary); // This function takes queue and prints it.

// This function converts decimal number to binary number.
std::queue<int> convertToBinary(int number)
{
    std::queue<int> binary;
    std::stack<int> reversedQueue;
    do
    {
        reversedQueue.push(number % 2);
        number = number / 2;

    } while (number > 0);
    while (!reversedQueue.empty())
    {
        binary.push(reversedQueue.top());
        reversedQueue.pop();
    }
    return binary;
}

// This function applies a not logic to a number.
std::queue<int> notLogic(std::queue<int> binary)
{
    std::queue<int> notBinary;

    while (!binary.empty())
    {
        notBinary.push(1 - binary.front());
        binary.pop();
    }
    return notBinary;
}

std::queue<int> orLogic(std::queue<int> b1, std::queue<int> b2)
{
    std::queue<int> result;
    while (!b1.empty() && !b2.empty())
    {
        int bit1 = b1.front();
        int bit2 = b2.front();

        result.push(bit1 | bit2);
        b1.pop();
        b2.pop();
    }
    return result;
}
std::queue<int> andLogic(std::queue<int> b1, std::queue<int> b2)
{
    std::queue<int> result;
    while (!b1.empty() && !b2.empty())
    {
        int bit1 = b1.front();
        int bit2 = b2.front();

        result.push(bit1 & bit2);
        b1.pop();
        b2.pop();
    }
    return result;
}
int main()
{
    int n1, n2;
    do
    {
        std::cout << "Enter any two numbers: " << std::endl;
        std::cin >> n1 >> n2;

    } while (n1 < 0 || n2 < 0);

    printBinaryValue(convertToBinary(n1));
    printBinaryValue(convertToBinary(n2));

    std::cout << "The OR of two number is: " << std::endl;
    printBinaryValue(orLogic(convertToBinary(n1), convertToBinary(n2)));
    std::cout << "The AND of two number is: " << std::endl;
    printBinaryValue(andLogic(convertToBinary(n1), convertToBinary(n2)));
    return 0;
}

// Prints the queue
void printBinaryValue(std::queue<int> binary)
{
    while (!binary.empty())
    {
        std::cout << binary.front() << "\t";
        binary.pop();
    }
    std::cout << std::endl;
}
