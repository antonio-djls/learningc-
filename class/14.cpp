// Lambda Functions
#include <iostream>
// exemplo de uso da função Lambda
auto hello = []() { std::cout << "Hello World" << std::endl; };

auto somar = [](int a, int b) { return a + b; };

int main() {
  hello();
  std::cout << somar(2, 4) << std::endl;
  return 0;
}
