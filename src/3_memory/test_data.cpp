#include "test_data.h"
#include <fstream>

int main() {
  // File path to your JSON file
  std::string file_path = "../test_credit_cards_10000.json";

  // Open the file for reading
  std::ifstream file(file_path);

  if (!file.is_open()) {
    std::cerr << "Could not open the file!" << std::endl;
    return 1;
  }

  // Parse the file content as JSON
  nlohmann::json json_data;
  file >> json_data;

  // Create a vector to store the parsed credit card info
  std::vector<CreditCardInfo> credit_cards =
      json_data.get<std::vector<CreditCardInfo>>();

  // Output the first few entries to verify the data
  std::cout << "total cards: " << credit_cards.size() << " vs "
            << credit_cards.capacity() << "\n";
  for (int i = 0; i < 5 && i < credit_cards.size(); ++i) {
    credit_cards[i].print();
  }

  return 0;
}
