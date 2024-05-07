#include <iostream>

int main()
{
    // fill() = Fills a range of elements with a specified value
    // fill(begin, end, value)
    const int SIZE = 150;
    std::string foods[SIZE];
    fill(foods, foods + SIZE / 3, "pizza");
    fill(foods + SIZE / 3, foods + SIZE / 3 * 2, "BURGER");
    fill(foods + SIZE / 3 * 2, foods + SIZE, "HOT DOGS");

    for (std::string food : foods)
    {
        std::cout << food << std::endl;
    }
    return 0;
}