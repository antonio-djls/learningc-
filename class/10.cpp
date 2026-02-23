#include <iostream>
#include <string>

struct base {
  // Inicializando com valores por padrão
  // base() : x(2), y(3), name("Antonio") {};

  base() = default;
  std::string name{"Antonio"};
  int x{};
  int y{};
};

int main() {
  base k;
  std::cout << k.name << std::endl;
  std::cout << k.x << std::endl;
  std::cout << k.y << std::endl;
  return 0;
}
