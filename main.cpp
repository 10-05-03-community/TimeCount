// https://ravesli.com/urok-129-tajming-koda-vremya-vypolneniya-programmy/
// https://habr.com/ru/post/324984/

#include <iostream>
#include "timer.hpp"

int main() {
  Timer t;

  // Здесь находится код, к которому применяется тайминг

  std::cout << "Time elapsed (sec): " << t.elapsed() << '\n';
}