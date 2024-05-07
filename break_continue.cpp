#include <iostream>

int main() {
  for (int i = 0; i < 1000; i++)
  {
    if (i % 2 == 1)
    {
        continue; // skipps current iteration
    }
    if (i == 420)
    {
        std::cout << "Number 420 Found!" << std::endl;
        break; // breaks out of a loop
    }
    std::cout << i << std::endl; 
  }
  return 0;
}