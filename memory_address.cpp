#include <iostream>

int main() {
  std::string name = "Praphulla";
  int age = 18;
  bool isStudent = true;

  std::cout << &name << std::endl;  
  std::cout << &age << std::endl;  
  std::cout << &isStudent << std::endl;  
  return 0;
}