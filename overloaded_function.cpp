#include <iostream>

void bakePizza();
void bakePizza(std::string topping);
int main() {
  bakePizza("Cheese");
  return 0;
}

void bakePizza()
{
    std::cout << "Here is your pizza!" << std::endl;
}

void bakePizza(std::string topping)
{
    std::cout << "Here is your " << topping << " pizza." << std::endl;
}