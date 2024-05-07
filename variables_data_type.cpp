#include <iostream>

int main(void)
{
    std::string name = "Praphulla";
    int age = 18;
    double gpa = 3.66;
    char grade = 'A';
    bool isStudent = true;

    std::cout << "Student Details: " << std::endl;

    std::cout << "Name: " << name << ", Age: " << age << ", GPA: " << gpa << ", Grade: " << grade << ", Is Student: " << isStudent << std::endl;
    return 0;
}