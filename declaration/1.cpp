#include <iostream>

// Forward Declaration
//  Declaração de classe  e de função
//

int add(int a, int b);
class classe;

class classe {
private:
  int data{10};

public:
  void print() { std::cout << data << std::endl; }
};

int main() {

  int x = 2;
  int y = 3;
  int z = add(x, y);
  std::cout << z << std::endl;

  classe example;
  example.print();

  return 0;
}
int add(int a, int b) { return a + b; }
