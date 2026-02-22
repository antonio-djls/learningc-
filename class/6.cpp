#include <iostream>

class animal {
public:
  animal() { std::cout << "Construtor animal" << std::endl; }
  ~animal() { std::cout << "Destrutor animal chamado " << std::endl; }

protected:
  std::string name;
};

class monstro : public animal {
public:
  monstro(std::string nome) {
    name = nome;
    std::cout << "Construtor monstro" << std::endl;
    std::cout << "**********************" << std::endl;
    std::cout << "  " << name << std::endl;
    std::cout << "**********************" << std::endl;
  }
  ~monstro() { std::cout << "Destrutor chamado (monstro)" << std::endl; }
};

int main() {
  monstro m("Antonio");

  return 0;
}
