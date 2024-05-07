#include <iostream>

struct student
{
    std::string name;
    int age;
    double gpa;
    bool enrolled;
};
int main()
{

    student s1;
    s1.name = "Praphulla";
    s1.age = 18;
    s1.gpa = 3.66;
    s1.enrolled = true;

    std::cout << "Name: " << s1.name << std::endl;
    std::cout << "Age: " << s1.age << std::endl;
    std::cout << "GPA: " << s1.gpa << std::endl;
    std::cout << "Is Enrolled: " << s1.enrolled << std::endl;

    student s2;
    s2.name = "Lenny";
    s2.age = 17;
    s2.gpa = 2.87;
    s2.enrolled = false;

    std::cout << "Name: " << s2.name << std::endl;
    std::cout << "Age: " << s2.age << std::endl;
    std::cout << "GPA: " << s2.gpa << std::endl;
    std::cout << "Is Enrolled: " << s2.enrolled << std::endl;


    return 0;
}