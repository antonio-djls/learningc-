// Typeid Operator
// É um operador que fornece uma referência para o tipo do objeto
#include <iostream>

class base {
  virtual void x() {};
};
class derivada : public base {};

int main() {

  // base *ponteiro_base = new derivada;
  // std::cout << "Tipo : " << typeid(*ponteiro_base).name() << std::endl;
  // delete ponteiro_base;

  // Downcast abaixo, passo de um objeto de classe superior para um
  // inferior(Inferior pois é uma classe derivada)

  base *ponteiro_base = new base;
  derivada *ponteiro_base_derivada_nova_instancia =
      dynamic_cast<derivada *>(ponteiro_base);
  std::cout << "Endereço atual" << &ponteiro_base_derivada_nova_instancia
            << std::endl;
  if (ponteiro_base) {
    std::cout << "Funcionou Downast" << std::endl;
  } else {
    std::cout << "N funcionou" << std::endl;
  }
  base *ponteiro_novo =
      dynamic_cast<base *>(ponteiro_base_derivada_nova_instancia);
  if (ponteiro_novo) {
    std::cout << "Funcionou o Upcast" << std::endl;
  } else {
    std::cout << "Não funcionou o Upcast" << std::endl;
  }
  std::cout << "Endereço final " << &ponteiro_base_derivada_nova_instancia
            << std::endl;
  return 0;
}
