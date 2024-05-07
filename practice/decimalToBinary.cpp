#include <iostream>
#include <stack>

void convertToBinary(int number)
{
    std::stack<int> binary;
    do
    {
        if (number % 2 == 1)
        {
            binary.push(1);
        }
        else
        {
            binary.push(0);
        }
        number = number / 2;
    } while (number != 0 || number > 0);
    while (!binary.empty())
    {
        std::cout << binary.top() << "\t";
        binary.pop();
    }
    std::cout << '\n';
    return;
}
int main()
{
    for (int i = 0; i < 1000; i++)
    {
        std::cout << "Decimal: " << i << " = " << "Binary: " << "\t";
        convertToBinary(i);
    }
    return 0;
}