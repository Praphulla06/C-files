#include <iostream>
#include <cmath>
int main() {
  double h, p, b;
  
  std::cout << "Enter side p: ";
  std::cin >> p;

  std::cout << "Enter side b: ";
  std::cin >> b;

  p = pow(p, 2);
  b = pow(b, 2);

  h = sqrt(p + b);

  std::cout << "Hypotenuse: " << h << std::endl;
  return 0;
}