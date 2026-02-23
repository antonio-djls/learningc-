// Operator Overloading

#include <iostream>

struct numero {
  int valor{};

  numero(int v) { valor = v; }

  // Overloard  + operator

  // numero operator+(const numero &n) { return numero(valor + n.valor); }
  // Testando operadores
  numero operator+(const numero &x) { return numero(valor + x.valor); }
  numero operator-(const numero &x) {
    std::cout << "Subtraindo o número que foi passado " << std::endl;
    return numero(valor - 2);
  }
  void mostrar() { std::cout << valor << std::endl; }
};

int main() {
  numero n1(5), n2(10);
  numero n3 = n1 + n2;
  n3.mostrar();
  numero n4 = n3 - n1;
  n4.mostrar();

  return 0;
}
