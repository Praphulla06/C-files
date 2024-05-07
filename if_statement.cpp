#include <iostream>

int main() {
  int age;

  std::cout << "Enter your age: ";
  std::cin >> age;

  if (age >= 18 && age < 100)
  {
    std::cout << "You can Vote!" << std::endl;
  } 
  else if (age > 100)
  {
    std::cout << "Age should be less than 100 years old!" << std::endl;
  }
  else if (age < 0)
  {
    std::cout << "Enter positive value for age!" << std::endl;
  }
  else
  {
    std::cout << "You cannot vote!" << std::endl;
  }
  return 0;
}