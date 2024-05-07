#include <iostream>

int main() {
  std::string car[] = {"Corvette", "Mustang", "Camry"};

  std::cout << car << std::endl; // Prints the address of first element of array 
  std::cout << car[0] << std::endl; // Prints first element of the array

  std::string names[4];

  names[0] = "Praphulla";
  names[1] = "Henry";
  names[2] = "Jack";
  names[3] = "Josh";

  for (int i = 0; i < 4; i++)
  {
    std::cout << names[i] << std::endl; 
  }

  int numbers[] = {2,4,1,7,5,9};

  return 0;
}