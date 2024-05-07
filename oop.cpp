#include <iostream>

class Human
{
public:
    std::string name;
    std::string occupation;
    int age;
    bool isStudent = true; // Default attribute.

    void eat()
    {
        std::cout << "This person is eating!" << std::endl;
    }
    void drink()
    {
        std::cout << "This person is drinking!" << std::endl;
    }
    void sleep()
    {
        std::cout << "This person is sleeping!" << std::endl;
    }
    void introduce()
    {
        std::cout << "Name: " << name << ", Occupation: " << occupation << ", Age: " << age << "Is Student: " << isStudent << std::endl;
    }
};
int main()
{
    // object = A collection of attributes and methods
    //          They can have characteristics and could perform actions
    //          Can be used to mimic real world items (eg: Phone, Book, Dog)
    //          Created from a class which acts as a "blue-print".

    Human h1;
    h1.name = "Praphulla";
    h1.occupation = "Student";
    h1.age = 18;

    std::cout << h1.name << std::endl;
    h1.introduce();
    h1.eat();
    h1.drink();
    h1.sleep();

    Human h2;
    h2.name = "Morty";
    h2.occupation = "Teacher";
    h2.age = 34;
    h2.isStudent = false;
    h2.introduce();
    return 0;
}