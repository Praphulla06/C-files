#include <iostream>

int main()
{
    std::string students[] = {"Spongebob", "Patrick", "Jenny", "Squidward"};
    for(std::string student : students)
    {
        std::cout << student << std::endl;
    }

    int marks[] = {65, 78, 81, 48, 84};

    for (int mark : marks)
    {
        double gpaMarks = (double) mark / 25;
        std::cout << gpaMarks << std::endl;
    }
    return 0;
}