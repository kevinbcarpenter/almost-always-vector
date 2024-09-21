#include <iostream>
#include <vector>

int main() {
  std::vector<u_short> co_years = {2019, 2020, 2021,
                                   2022, 2023, 2024}; // initializer list

  std::cout << "Accessing the first elements...\n";
  std::cout << co_years[0] << "\n";
  std::cout << co_years.front() << "\n";

  std::cout << "Accessing the last elements...\n";
  std::cout << co_years.back() << "\n";
  std::cout << co_years.at(5) << "\n";

  std::cout << "Showing them all...\n";
  for (auto yr : co_years) {
    std::cout << yr << ' ';
  }
  std::cout << "\n";

  return 0;
}