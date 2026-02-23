#include <iostream>

class base {
public:
  base() { std::cout << "Construtor base" << std::endl; }
  ~base() { std::cout << "Destrutor base" << std::endl; }
  void mem() { std::cout << " Mem Base" << std::endl; }
};

class derivada : public base {
public:
  derivada() { std::cout << "Construtor derivada" << std::endl; }
  ~derivada() { std::cout << "Destrutor derivada" << std::endl; }
  void mem() { std::cout << " Mem Derivada" << std::endl; }
};
// Destrutores Virtuais
int main() {
  // base* instancia = new derivada;
  // instancia->mem();
  // delete instancia;

  return 0;
}
