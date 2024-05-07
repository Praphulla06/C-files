#include <iostream>

class Student
{
public:
    std::string name;
    int age;
    double percentage;
    bool isStudent = true;

    Student(std::string name, int age, double percentage)
    {
        this->name = name;
        this->age = age;
        this->percentage = percentage;
    }

    void introduce()
    {
        std::cout << "Name: " << name << ", Age: " << age << ", Percentage: " << percentage << "Is Student: " << isStudent << std::endl;
    }
};

int main()
{
    // constructors = special method that is automatically called when
    // when an object is instantiated useful for assigning values to attribute as arguments

    Student s1("Praphulla", 18, 81.50);
    Student s2("David", 19, 91.50);
    s1.introduce();
    s2.introduce();
    return 0;
}