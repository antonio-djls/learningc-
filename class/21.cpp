#include <iostream>
// Multiple Inheritance

class cachorro {
public:
  void latir() { std::cout << "cachorro" << std::endl; }
};

class gato : public cachorro {
public:
  void miau() { std::cout << "gato" << std::endl; }
};

class passaro : public gato {
public:
  void trinar() { std::cout << "pássaro" << std::endl; }
};

int main() {

  passaro p1;
  std::cout << "passaro ";
  p1.latir();
  return 0;
}
