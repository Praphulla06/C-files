#include <iostream>

int main() {
  int *ptr;
  int a, b;

  a = 10;
  b = 20;

  ptr = &a;
  std::cout << "This is the address of a: " << ptr << std::endl;
  std::cout << "This is the address of ptr: " << &ptr << std::endl;

  std::cout << "This is the value of a: " <<  a << std::endl;
  std::cout << "This is the value of b: " <<  b << std::endl;
  *ptr = 100;
  std::cout << "This is the value of a: " <<  a << std::endl;
  std::cout << "This is the value of b: " <<  b << std::endl;
  return 0;
}