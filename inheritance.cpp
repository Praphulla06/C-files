#include <iostream>

class Animal
{
public:
    bool alive = true;

    void eat()
    {
        std::cout << "This animal is eating" << std::endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        std::cout << "The dog goes woof!" << std::endl;
    }
};

class Cat : public Animal
{
public:
    void meow()
    {
        std::cout << "The cat goes meow!" << std::endl;
    }
};
int main()
{
    // inheritance = A class can recieve attributes and methods from another class
    // children classes inherit from a parent class
    // Helps to reuse similar code found within multiple classes
    Dog d1;
    std::cout << d1.alive << std::endl;
    d1.eat();
    d1.bark();

    Cat c1;
    c1.eat();
    c1.meow();
    return 0;
}