// Object Lifetime in C++

// Variáveis Globais só são desalocadas quando o programa para ser executado
#include <chrono>
#include <iostream>
#include <thread>

// cria uma thread para ser executada paralelamente ao código
void tarefa(const std::string &name, int tempo) {
  for (int i = 0; i < 3; i++) {
    std::cout << name << ":" << i << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(tempo));
  }
}

int main() {
  std::thread t1(tarefa, "Antonio", 20);
  t1.join(); // aguarda a execução da thread ser encerrada
  // t1.detach(); a thread roda de maneira independente
  return 0;
}
