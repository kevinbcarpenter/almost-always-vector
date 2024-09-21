#include <iostream>
#include <vector>

int main() {
  std::vector<u_short> co_years = {2019, 2020, 2021, 2022, 2023, 2024};
  u_short *yrPtr = co_years.data();

  std::cout << "Years using data() pointer: ";
  for (size_t i = 0; i < co_years.size(); ++i) {
    std::cout << *(yrPtr + i) << " ";
  }
  yrPtr[1] = 9999;

  std::cout << "\nModified vector: ";
  for (int num : co_years) {
    std::cout << num << " ";
  }

  return 0;
}