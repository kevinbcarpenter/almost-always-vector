#include <iostream>
#include <vector>

void addYears(std::vector<int> &vec, int start, int years) {
  for (auto i = start; i < start + years; ++i) {
    vec.push_back(i);
  }
}

int main() {
  std::vector<int> co;
  addYears(co, 2019, 4);
  addYears(co, co.back(), 6);
  addYears(co, co.back(), 12);
  std::cout << "Size/Capacity: " << co.size() << "/" << co.capacity() << "\n";
  co.shrink_to_fit(); // non-binding
  std::cout << "Size/Capacity: " << co.size() << "/" << co.capacity() << "\n";

  for (auto y : co) {
    std::cout << y << " ";
  }

  return 0;
}