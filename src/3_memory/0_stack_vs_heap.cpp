#include <iostream>
#include <vector>

int main() {
  using year = u_short;
  year cppconEarlyYears[5] = {2014, 2015, 2016, 2017, 2018};
  std::vector<year> cppconAuroraYears = {2019, 2021, 2022, 2023, 2024};

  std::cout << "Bellevue: ";
  for (int i = 0; i < 5; i++) {
    std::cout << cppconEarlyYears[i] << " ";
  }
  std::cout << "\nAurora: ";
  for (auto dy : cppconAuroraYears) {
    std::cout << dy << " ";
  }

  return 0;
}