#include <chrono>
#include <cstdlib>
#include <iostream>
#include <thread>

int main() {
  auto inicio = std::chrono::high_resolution_clock::now();

  // Duração usando chrono

  std::chrono::seconds sec(5);
  std::chrono::minutes min(2);
  std::chrono::hours hours(1);

  // Sleep
  std::this_thread::sleep_for(std::chrono::milliseconds(60));

  auto fim = std::chrono::high_resolution_clock::now();

  auto duracao =

      std::chrono::duration_cast<std::chrono::milliseconds>(fim - inicio);
  std::cout << "Tempo de execução " << duracao.count() << " milliseconds "
            << std::endl;
  return 0;
}
