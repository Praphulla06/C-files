#include <iostream>

int factorial(int n);

int main()
{
  // recursion = a programming technique where a function
  // invokes itself from within
  // break a complex concept into a repeatable single step

  // (iterative vs recursive)

  // advantages = less code and is cleaner
  //              useful for sorting and searching algorithms

  // disadvantages = uses more memory
  //                 slower

  std::cout << factorial(5) << std::endl;
  return 0;
}

int factorial(int n)
{
  while (n > 1)
  {
    return n * factorial(n - 1);
  }
}