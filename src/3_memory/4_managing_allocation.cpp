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
  std::cout << "Size/Capacity: " << co.size() << "/" << co.capacity() << "\n";
  addYears(co, co.back(), 6);
  std::cout << "Size/Capacity: " << co.size() << "/" << co.capacity() << "\n";
  addYears(co, co.back(), 10);
  std::cout << "Size/Capacity: " << co.size() << "/" << co.capacity() << "\n";
  return 0;
}