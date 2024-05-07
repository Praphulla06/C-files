#include <iostream>

int main() {
  // pointers = variable that stores a memory address of another variable

  // & address-of operator
  // * dereference operator

  std::string name = "Praphulla";

  std::string *ptr = &name;

  int number = 42069;

  int *int_ptr = &number;

  std::cout << "This is address of a number: " << int_ptr << std::endl;
  std::cout << "This is addressof a string: " << ptr << std::endl; 

  std::cout << "This is value of a number: " << *int_ptr << std::endl;
  std::cout << "This is value of a string: " << *ptr << std::endl; 


  std::string names[] = {"Henry", "Praphulla", "Josh", "Jimmy", "Nigel"};
  std::string *name_ptr = names;

  int mat[][3] = {{1,2,3}, {4,5,6}};
  std::cout << "This gives the memory of first element in the array: " << name_ptr << std::endl; 
  std::cout << "This gives the value stored in index 0 of the array: " << *(name_ptr + 1) << std::endl; 

  std::cout << *(*(mat) + 1);
  return 0;
}