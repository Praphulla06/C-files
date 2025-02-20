#include <iostream>

double getTotal(double prices[], int size);
int main() {
  double prices[] = {49.12, 123.32, 90.23, 45.76, 450.67};
  int size = sizeof(prices) / sizeof(prices[0]);
  double total = getTotal(prices, size);

  std::cout << "Total: $" << total << std::endl; 
  return 0;
}

double getTotal(double prices[], int size)
{
    double total = 0;

    for(int i = 0; i < size; i++)
    {
        total += prices[i]; 
    }
    return total;
}