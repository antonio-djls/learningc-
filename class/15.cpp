#include <iostream>

// Overloading Function
int print(int value) { return value + 1; }

double print(double value) { return value + 1; }

int main() {

  std::cout << print(2) << std::endl;
  std::cout << print(1.3) << std::endl;

  return 0;
}
