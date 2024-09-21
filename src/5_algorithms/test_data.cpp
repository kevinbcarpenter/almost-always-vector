#include "test_data.h"
#include <algorithm>
#include <fstream>

nlohmann::json load_card_data(std::string file_path) {
  std::ifstream file(file_path);

  if (!file.is_open()) {
    std::cerr << "Could not open the file!" << std::endl;
    return 1;
  }

  // Parse the file content as JSON
  nlohmann::json json_data;
  file >> json_data;

  return json_data;
}

int main() {
  auto json_data = load_card_data("../large_card_data_10000.json");
  std::vector<CreditCardInfo> credit_cards =
      json_data.get<std::vector<CreditCardInfo>>();

  // Output the first few entries to verify the data
  std::cout << "total cards: " << credit_cards.size() << " vs "
            << credit_cards.capacity() << "\n";

  // Desired card type
  std::string desired_type = "Visa";

  // Use std::all_of with a function pointer as the predicate
  bool all_are_visa = std::all_of(credit_cards.begin(), credit_cards.end(),
                                  [&desired_type](const CreditCardInfo &card) {
                                    return is_of_type(card, desired_type);
                                  });

  if (all_are_visa) {
    std::cout << "All credit cards are of type " << desired_type << "."
              << std::endl;
  } else {
    std::cout << "Not all credit cards are of type " << desired_type << "."
              << std::endl;
  }

  return 0;
}
