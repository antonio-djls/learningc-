#include <iostream>

template <typename T>

void print(const T &x) {
  std::cout << x << std::endl;
}

int main() {
  print(42);

  return 0;
}
