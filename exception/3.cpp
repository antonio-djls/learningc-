#include <iostream>

void function() {

  if (true) {
    std::cout << "Algum erro ocorreu" << std::endl;
    std::exit(1);
  }
}

int main() {

  function();

  return 0;
}
