#include <iostream>

// Quando uma classe deriva de duas classes que essas derivam uma classe base
// podemos ter um problema onde uma propriedade pode se tornar ambígua
// Pois teoricamente você tem uma duplicação das propriedades, para isso é
// preciso usam uma herança virtual
//
// Diagrama
//    A
//   / \
//  B   C
//   \ /
//    D
// Note que o objeto da classe D herda duas vezes as propriedades da classe base

class base {
public:
  void print() { std::cout << "Classe base" << std::endl; }
};

class primeira_classe_derivada : virtual public base {
public:
  void print_derivado() { std::cout << "Classe derivada (print)" << std::endl; }
};

class segunda_classe_derivada : virtual public base {
public:
  void segundo_print_derivado() {
    std::cout << " Segunda classe derivada print" << std::endl;
  }
};

class terceira_classe_derivada : public primeira_classe_derivada,
                                 public segunda_classe_derivada {
public:
  void terceiro_print() {
    std::cout << "Terceiro print de classe derivada" << std::endl;
  }
};

int main() {

  terceira_classe_derivada p3;
  p3.print();

  return 0;
}
