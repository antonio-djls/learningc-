#include <cstddef>
#include <iostream>

// Classes Parte 9
class collection {
public:
  collection() {
    std::cout << "Construtor chamado" << std::endl;
    data = new int[10];
    try {
      throw 20;
    } catch (int e) {
      // mensagens de erro
      // std::cout << "mensagem de erro encontrada" << std::endl;
    }
  }
  // destrutor
  ~collection() {
    std::cout << "Destrutor chamado" << std::endl;
    delete[] data;
  }

  int &operator[](std::size_t idx) { return data[idx]; }
  const int &operator[](std::size_t idx) const { return data[idx]; }

private:
  int *data;
};

int main() {
  collection p1;
  p1[0] = 1;
  std::cout << p1[0] << std::endl;
  return 0;
}
