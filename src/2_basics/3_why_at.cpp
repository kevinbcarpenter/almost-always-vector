#include <iostream>
#include <vector>

int main() {
  std::vector<u_short> co_years = {2019, 2020, 2021,
                                   2022, 2023, 2024}; // initializer list

  std::cout << "When it works...\n";
  std::cout << co_years[0] << "\n";
  std::cout << co_years.at(5) << "\n";

  return 0;
}