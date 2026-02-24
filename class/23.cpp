#include <iostream>
#include <memory>
#include <vector>

class base {
public:
  base(std::vector<int> dados) : dados(std::move(dados)) {}
  std::vector<int> &getter() { return dados; }

private:
  std::vector<int> dados;
};

int main() {
  auto objeto = std::make_unique<base>(std::vector<int>(10));

  // iterando com o getter
  for (int i = 0; i < 10; i++) {
    objeto->getter()[i] = i + 1;
    std::cout << objeto->getter()[i] << std::endl;
  }

  return 0;
}
