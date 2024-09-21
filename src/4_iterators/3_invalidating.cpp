#include <iostream>
#include <vector>

int main() {
  std::vector<int> cppconYears = {2019, 2020, 2021, 2022, 2023, 2024};
  auto it = cppconYears.begin() + 1;

  std::cout << "Lost year: " << *it << std::endl;
  cppconYears.push_back(2025);
  std::cout << "After push_back: " << *it << std::endl;

  for (auto yr : cppconYears) {
    std::cout << yr << ' ';
  }

  return 0;
}