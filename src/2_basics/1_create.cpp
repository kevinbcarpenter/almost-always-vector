#include <iostream>
#include <vector>

int main() {
  std::vector<u_short> wa_years; // empty vector of years

  wa_years.push_back(2014); // adding to the Washington years.
  wa_years.push_back(2015);
  wa_years.push_back(2016);
  wa_years.push_back(2017);
  wa_years.push_back(2018);

  std::vector<u_short> co_years = {2019, 2020, 2021,
                                   2022, 2023, 2024}; // initializer list

  std::vector<u_short> cppcon_total_years(11); // construct with a size

  std::vector<u_short> cppcon_space_odessy(11, 2001); // with size and a default

  for (auto yr : cppcon_total_years) {
    std::cout << yr << ' ';
  }
  std::cout << std::endl;

  return 0;
}