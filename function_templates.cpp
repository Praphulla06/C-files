#include <iostream>
template <typename T, typename U>

auto max(T x, U y)
{
    return (x > y) ? x : y;
}

int main() {
    std::cout << max(10.2,21.32) << std::endl;  
  return 0;
}