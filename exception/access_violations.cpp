#include <iostream>

// int main() {
//   //  Aloca um ponteiro apontado para nada;
//   //  Crie uma variável que aponta para o ponteiro nulo
//   int *p = nullptr;
//   int x = *p;
//   std::cout << x << std::endl;
//   //  Isso é um clássico problema  de ponteiro inválido
//   return 0;
// }
//
//

int main() {
  // criação de array com cinco elementos
  int array[5] = {1, 2, 3, 4};
  // std::cout << array[5] << std::endl;
  // clássico erro de acesso inválido a memória fora do alcance do vetor

  /* Outro erro comum é o acesso de memória liberada
   * int *p2 = new int(10);
   * delete[] p2;
   * p2[0] = 2; // -> acesso de memória liberada
   */

  return 0;
}
