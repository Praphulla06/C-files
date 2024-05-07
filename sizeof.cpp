#include <iostream>

int main() {
  
  double gpa = 3.66;
  std::cout << "The size of double " << sizeof(gpa) << std::endl; 

  std::string name = "Pradhananga";
  std::cout << "The size of string " << sizeof(name) << std::endl; 

  float PI = 3.14;
  std::cout << "The size of float " << sizeof(PI) << std::endl; 

  int age = 18;
  std::cout << "The size of int " << sizeof(age) << std::endl; 

  char grade = 'A';
  std::cout << "The size of char " << sizeof(grade) << std::endl; 

  bool isStudent = true;
  std::cout << "The size of bool " << sizeof(isStudent) << std::endl; 

  char grades[] = {'A', 'B', 'C', 'D', 'E'};
  std::cout << "The size of array " << sizeof(grades) << std::endl; 
  
  double gpas[] = {3.45, 2.81, 3.75, 1.28, 3.66, 2.34};
  int size = sizeof(gpas) / sizeof(gpas[0]);
  std::cout << "The number of element in the array is " << size << std::endl; 
  return 0;
}