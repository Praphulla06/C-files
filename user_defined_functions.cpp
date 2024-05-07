#include <iostream>

void happyBirthday(std::string name)
{
    std::cout << "Happy Birthday to you, " << name << std::endl;
    std::cout << "Happy Birthday to you!" << std::endl;
    std::cout << "Happy Birthday to you!" << std::endl;
}
int addNumbers(int a, int b);
int main()
{
    std::string name = "Praphulla";
    happyBirthday(name);
    addNumbers(90, 70);
    return 0;
}

int addNumbers(int a, int b)
{
    std::cout << a + b << std::endl;
}