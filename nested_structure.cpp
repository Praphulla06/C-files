#include <iostream>

struct Address
{
    std::string city;
    std::string province;
    int pin_code;
};

struct Student
{
    std::string name;
    int roll;
    float marks[3];
    Address address;
};

int main()
{
    Address address = {"Kathmandu", "Bagmati", 446000};
    Student s = {"Praphulla", 025, {80, 75, 91}, address};
    std::cout << s.name << std::endl;
    std::cout << s.roll << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << s.marks[i] << '\t';
    }
    std::cout << '\n';
    std::cout << s.address.city << std::endl; 
    std::cout << s.address.province << std::endl; 
    std::cout << s.address.pin_code << std::endl; 
    return 0;
}