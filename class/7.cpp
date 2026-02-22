#include <iostream>

class base {
public:
  base() { std::cout << "Construtor chamado" << std::endl; }
  ~base() { std::cout << "Destrutor chamado" << std::endl; }
  virtual void funcao_membro() {
    std::cout << "Base:funcao_membro" << std::endl;
  }
};

class derivada : public base {
public:
  derivada() { std::cout << " Construtor derivada" << std::endl; }
  ~derivada() { std::cout << "Destrutor derivada" << std::endl; }
  void funcao_membro() { std::cout << "Derivada::funcao_membro" << std::endl; }
};

int main() {
  base instancia_base;
  instancia_base.funcao_membro();

  return 0;
}
