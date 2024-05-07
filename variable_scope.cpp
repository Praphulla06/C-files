#include <iostream>

void printNum(int myNum);
int number = 10; // Global Variable
int main() {
  int myNum = 1; // Local Variable
  printNum(myNum);  
  return 0;
}

void printNum(int myNum)
{
    std::cout << "This is global variable: " << number << std::endl; 
    std::cout << "This is local variable: " << myNum << std::endl;
}