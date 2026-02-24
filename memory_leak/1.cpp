#include <iostream>
#include <memory>

// int main() {
//
//   int *ponteiro = new int(10);
//   std::cout << *ponteiro << std::endl;
//
//   // delete ponteiro; Se n deletar há vazamento de memória
//
//   return 0;
// }

int main() {
  // A memória não precisa ser liberada, a linguagem cuida disso
  std::unique_ptr<int> ponteiro_moderno = std::make_unique<int>(10);
  std::cout << *ponteiro_moderno << std::endl;

  return 0;
}
