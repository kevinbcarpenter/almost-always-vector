#include "nlohmann/json.hpp"
#include <iostream>
#include <string>

using json = nlohmann::json;

struct CreditCardInfo {
  std::string type;
  std::string name;
  std::string number;
  std::string cvv;
  std::string expiry;

  void print() {
    std::cout << "Type: " << type << "\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Number: " << number << "\n";
    std::cout << "CVV: " << cvv << "\n";
    std::cout << "Expiry: " << expiry << "\n\n";
  }
};

// Define a from_json function to map JSON fields to the struct
void from_json(const json &j, CreditCardInfo &card) {
  j.at("type").get_to(card.type);
  j.at("name").get_to(card.name);
  j.at("number").get_to(card.number);
  j.at("cvv").get_to(card.cvv);
  j.at("expiry").get_to(card.expiry);
}

// Define a to_json function to map CreditCardInfo struct to a JSON object
void to_json(nlohmann::json &j, const CreditCardInfo &card) {
  j = nlohmann::json{{"type", card.type},
                     {"name", card.name},
                     {"number", card.number},
                     {"cvv", card.cvv},
                     {"expiry", card.expiry}};
}
