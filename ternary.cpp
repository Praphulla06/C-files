#include <iostream>

int main() {
  int age = 2;

  int canVote = (age > 18) ? true : false;

  std::cout << canVote << std::endl;
  return 0;
}