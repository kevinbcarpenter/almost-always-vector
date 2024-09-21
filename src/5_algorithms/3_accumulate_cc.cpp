#include "test_data.h"
#include <algorithm>
#include <fstream>
#include <iomanip>

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
  // Example data
  auto json_data = load_card_data("../large_card_data_100000.json");
  std::vector<CreditCardInfo> cards =
      json_data.get<std::vector<CreditCardInfo>>();
  std::vector<std::string> card_types = {"visa", "mc", "amex"};

  std::cout << "item count: " << cards.size() << "\n";
  for (auto ct : card_types) {
    // Use std::accumulate to sum amounts of the specific card type
    long totalAmount =
        std::accumulate(cards.begin(), cards.end(), 0L,
                        [&ct](long sum, const CreditCardInfo &card) {
                          return sum + (card.type == ct ? card.amount : 0);
                        });

    std::cout << "Total amount for " << ct << ": " << totalAmount / 10
              << std::endl;
  }

  return 0;
}