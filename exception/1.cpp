#include <iostream>

int divide(int a, int b) {
  if (b == 0) {
    throw "Divisão por zero";
  }
  return a / b;
}

int main() {
  int x, y;
  std::cin >> x >> y;

  try {
    int resultado = divide(x, y);
    std::cout << "Este é o resultado " << resultado << std::endl;
  } catch (const char *msg) {
    std::cerr << "Erro: " << msg << std::endl;
  }

  return 0;
}
