#include <iostream>

int main() {

  int a, b;
  std::cin >> a >> b;

  try {
    if (b == 0) {
      throw "Divisão por zero";
    }
  } catch (const char *msg) {
    std::cout << "Error: " << msg << std::endl;
  }

  return 0;
}
