#include <iostream>
#include <vector>

int main() {
  std::vector<u_short> co_years = {2019, 2020, 2021,
                                   2022, 2023, 2024}; // initializer list

  std::cout << "\nWhen it doesn't...\n";
  std::cout << co_years[7] << "\n";

  std::cout << "at() can catch it...\n";
  std::cout << co_years.at(7) << "\n";

  return 0;
}