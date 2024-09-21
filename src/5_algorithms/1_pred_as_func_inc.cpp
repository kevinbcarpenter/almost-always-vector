#include <algorithm>
#include <iostream>
#include <vector>

// Unary predicate function that checks if a number is even
bool isEven(int n) { return n % 2 == 0; }

int main() {
  std::vector<int> co = {2019, 2020, 2021, 2022, 2023, 2024};

  // Using std::find_if with a unary predicate to find the first even number
  auto it = std::find_if(co.begin(), co.end(), isEven);

  if (it != co.end()) {
    std::cout << "First even number: " << *it << '\n';
  } else {
    std::cout << "No even number found." << '\n';
  }

  return 0;
}