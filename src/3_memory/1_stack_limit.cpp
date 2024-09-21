#include <iostream>

void useStack(int depth) {
  char buffer[1024]; // Allocate 1 KB on the stack
  std::cout << "Depth: " << depth << " Address: " << &buffer << std::endl;
  useStack(depth + 1);
}

int main() {
  useStack(1);
  return 0;
}