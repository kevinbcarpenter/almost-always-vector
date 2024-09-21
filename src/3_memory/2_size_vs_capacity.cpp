#include <iostream>
#include <vector>

int main() {
  std::vector<int> co = {2019, 2020, 2021, 2022, 2023, 2024};
  std::cout << "Size/Capacity: " << co.size() << "/" << co.capacity() << "\n";

  std::vector<int> wa;
  std::cout << "Size/Capacity: " << wa.size() << "/" << wa.capacity() << "\n";
  wa.push_back(2014);
  std::cout << "Size/Capacity: " << wa.size() << "/" << wa.capacity() << "\n";
  wa.push_back(2015);
  std::cout << "Size/Capacity: " << wa.size() << "/" << wa.capacity() << "\n";
  wa.push_back(2016);
  std::cout << "Size/Capacity: " << wa.size() << "/" << wa.capacity() << "\n";

  return 0;
}