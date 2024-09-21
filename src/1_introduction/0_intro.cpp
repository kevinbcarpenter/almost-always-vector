#include <array>
#include <iostream>
#include <vector>

int a[] = {0, 1, 2, 3, 4};

std::array<int, 5> b = {0, 1, 2, 3, 4};

std::vector<int> c = {0, 1, 2, 3, 4};

auto main() -> int {
  std::cout << "C style array: " << sizeof(a) / sizeof(a[0]) << std::endl;
  std::cout << "STL array size: " << b.size() << std::endl;
  std::cout << "Vector size: " << c.size() << std::endl;

  return 0;
}