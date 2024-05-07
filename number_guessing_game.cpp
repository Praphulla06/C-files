#include <iostream>
#include <ctime>

int main() {
  srand(time(0));  
  int num = rand() % 10 + 1;
  int guess;
  int tries = 1;

  do
  {
    std::cout << "Tries: " << tries << std::endl;
    std::cout << "Enter your guess: ";
    std::cin >> guess;
    tries++;
  }
  while (guess != num);

  std::cout << num << std::endl;
  return 0;
}