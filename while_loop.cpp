#include <iostream>

int main() {
  std::string name;

  while(name.empty())
  {
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
  }

  int i = 0;
  while (i != 100)
  {
    std::cout << i << std::endl;
    i++;
  }
  return 0;
}