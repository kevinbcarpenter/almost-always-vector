#include <iostream>
#include <vector>

int main() {
  std::vector<int> co = {2019, 2020, 2021, 2022, 2023, 2024};

  auto it = co.begin();
  std::cout << "Value pointed to by iterator: " << *it << "\n"; // Output: 10
  std::cout << "Address of element in vector: " << &(*it)
            << "\n"; // Address of 10 in the vector
  std::cout << "Address of the iterator itself: " << &it
            << "\n"; // Address of the iterator object

  std::cout << "Iterator value at 3: " << *(it + 3) << "\n";

  return 0;
}