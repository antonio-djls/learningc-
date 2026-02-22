#include <iostream>

// Herança

class animal {
  // classe base
public:
  animal() {}
  void a() { std::cout << "a " << std::endl; }
  void b() { std::cout << "b" << std::endl; }
  void incrementar() {
    x++;
    y++;
  }
  float x, y;
};

class golden : public animal {};

class Golden : public animal {};

int main() {

  animal cachorro;
  cachorro.a();
  cachorro.b();

  return 0;
}
