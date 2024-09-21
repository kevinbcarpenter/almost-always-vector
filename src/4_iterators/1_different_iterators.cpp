#include <iostream>
#include <vector>

int main() {
  std::vector<int> co = {2019, 2020, 2021, 2022, 2023, 2024};

  std::cout << "Forward iteration using begin() and end():"
            << "\n";
  for (auto it = co.begin(); it != co.end(); ++it) {
    std::cout << *it << " "; // Dereference the iterator to get the value
  }

  std::cout << "\nReverse iteration using rbegin() and rend():"
            << "\n";
  for (auto rit = co.rbegin(); rit != co.rend(); ++rit) {
    std::cout << *rit << " "; // Dereference the reverse iterator
  }

  return 0;
}
