#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

int main()
{
    text_t firstName = "Praphulla";
    text_t lastName = "Pradhananga";

    number_t age = 18;

    std::cout << firstName << '\n' << lastName << age << std::endl;
    return 0;
}