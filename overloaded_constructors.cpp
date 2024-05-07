#include <iostream>

class Pizza
{
public:
    std::string topping1;
    std::string topping2;

    Pizza(std::string topping1)
    {
        this->topping1 = topping1;
    }
    Pizza(std::string topping1, std::string topping2)
    {
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
    Pizza()
    {
    }
};

int main()
{
    // overloaded constructors = multiple constructors with same name but different parameters
    // allows for varying arguments when instantiating an object
    Pizza p1("Cheese");
    Pizza p2("Pepperoni", "Mushroom");
    Pizza p3;
    std::cout << p1.topping1 << std::endl;
    std::cout << p2.topping1 << '\t' << p2.topping2 << std::endl;
    return 0;
}