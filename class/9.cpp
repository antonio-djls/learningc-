#include <iostream>

class base {
public:
  base() { std::cout << "Construtor base" << std::endl; }
  virtual ~base() { std::cout << "Destrutor base" << std::endl; }
};

class derivada : public base {
public:
  derivada() { std::cout << "Construtor derivada" << std::endl; }
  ~derivada() { std::cout << "Destrutor derivada" << std::endl; }
};
// Destrutores Virtuais
int main() {
  base *instancia = new derivada;
  delete instancia;
  return 0;
}
