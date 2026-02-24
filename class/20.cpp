#include <iostream>
// Dynamic Polymorphism

class a {
public:
  virtual void print() { std::cout << "a" << std::endl; }
};
class b : public a {
public:
  void print() override { std::cout << "b" << std::endl; }
};

class c : public b {
public:
  void print() override { std::cout << "c" << std::endl; }
};

int main() {
  a objeto;
  b objeto_b;
  c objeto_c;
  objeto.print();
  objeto_b.print();
  objeto_c.print();

  return 0;
}
