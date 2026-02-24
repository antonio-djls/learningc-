#include <exception>
#include <iostream>
#include <stdexcept>

int divide(int a, int b) {
  if (b == 0) {
    throw std::runtime_error("Divisão por zero");
  }
  return a / b;
}

int main() {
  int x, y;
  std::cin >> x >> y;

  try {
    int ans = divide(x, y);
    std::cout << ans << std::endl;
  } catch (const std::exception &msg) {
    std::cerr << "Error " << msg.what() << std::endl;
  }

  return 0;
}
