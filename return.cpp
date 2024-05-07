#include <iostream>
#include <cmath>
int square(int x);
int main()
{
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    int result = square(number);
    std::cout << "The sqaure of the number " << number << " is " << result << std::endl;
    return 0;
}

int square(int x)
{
    return pow(x, 2);
}