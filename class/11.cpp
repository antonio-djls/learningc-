#include <iostream>
#include <string>

struct base {
  std::string name;
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
