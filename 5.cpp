#include <iostream>

class classe {
protected:
  int dado = 1;

public:
  classe() { std::cout << "Construtor base" << std::endl; }
  ~classe() { std::cout << "Destrutor base" << std::endl; }
};

class classe_derivada : public classe {
public:
  classe_derivada() { std::cout << "Construtor derivado" << std::endl; }
  ~classe_derivada() { std::cout << "Destrutor derivado" << std::endl; }

  void retornar() { std::cout << dado << std::endl; }
};

int main() {
  classe_derivada u;

  u.retornar();

  return 0;
}
