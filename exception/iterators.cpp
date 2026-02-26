#include <iostream>
#include <numeric>
#include <ostream>
#include <vector>

int main() {

  std::vector<int> vi(6);
  std::iota(vi.begin(), vi.end(), 1);
  for (auto iterator = vi.begin(); iterator != vi.end(); iterator++) {
    std::cout << *iterator << std::endl;
  }
  // for (int i = 0; i < vi.size(); i++) {
  //   std::cout << vi[i] << std::endl;
  // }
  return 0;
}
