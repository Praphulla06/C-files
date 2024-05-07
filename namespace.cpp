
#include <iostream>
namespace first
{
    int x = 10;
}
namespace second
{
    int x = 20;
}
int main()
{
    // using namespace first //changes default to first
    // using namespace second //changes defaault to second
    int x = 0;
    std::cout << x << std::endl;         // Displays the local value of x i.e 0
    std::cout << first::x << std::endl;  // prints 10
    std::cout << second::x << std::endl; // prints 20
    return 0;
}
