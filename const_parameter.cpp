#include <iostream>

void printInfo(const std::string name,const int age);

int main() {
  std::string name = "Praphulla";
  int age = 18;

  printInfo(name, age);
  return 0;
}
void printInfo(const std::string name,const int age)

{
    std::cout << name << std::endl;
    std::cout << age << std::endl;
}