#include <array>
#include <iostream>

std::array<int, 5> b = {0, 1, 2, 3, 4};

auto main() -> int {
  std::cout << "Basic array of size: " << b.size() << std::endl;

  return 0;
}