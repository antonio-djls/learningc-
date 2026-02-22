#include <iostream>

// Friend functions
class informacao_privada {
  friend class user;

private:
  int passcode{};
};

class user {
  friend class informacao_privada;

public:
  user() : id(0) { proprio_codigo.passcode = 15; }
  friend void print_dado_privado(user u);

private:
  int id;
  informacao_privada proprio_codigo;
};

void print_dado_privado(user u) { std::cout << "Num " << u.id << std::endl; }

int main() {

  user instancia;
  // instancia.id = 12;
  print_dado_privado(instancia);

  return 0;
}
