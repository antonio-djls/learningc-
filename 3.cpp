#include <iostream>
#include <ostream>

// definição da classe
class us {
public:
  us(int);

private:
  int dado{};
};

// Inicializador do objeto
us::us(int i) {
  dado = i;

  std::cout << "Dados " << dado << std::endl;
}

int main() {
  us u(500);

  return 0;
}
