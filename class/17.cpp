// Memory model
#include <iostream>

int variavel_global = 10;
// declaração global

int main() {
  int x = 10;              // alocação estática
  int *ponteiro = new int; //  heap memory
  *ponteiro = 10;
  delete ponteiro;

  return 0;
}
