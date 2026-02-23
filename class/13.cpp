#include <iostream>

class estrutura {
private:
  int x{12};
  int y{12};

public:
  estrutura &operator++() {
    x++;
    y++;
    return *this;
  }
  void display() {
    std::cout << x << std::endl;
    std::cout << y << std::endl;
  }
};
int main() {
  estrutura n1;
  ++n1;

  n1.display();
  return 0;
}
