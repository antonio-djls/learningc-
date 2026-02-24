#include <iostream>

// Namespaces

namespace example {
std::string nome = "Antonio";
int age = 19;
} // namespace example

int main() {
  std::cout << "Name " << example::nome << std::endl;
  std::cout << "Idade " << example::age << std::endl;

  return 0;
}
