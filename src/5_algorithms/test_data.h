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
  long amount;

  void print() {
    std::cout << "Type: " << type << "\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Number: " << number << "\n";
    std::cout << "CVV: " << cvv << "\n";
    std::cout << "Expiry: " << expiry << "\n";
    std::cout << "Amount: " << amount / 10 << "\n\n";
  }
};

// Predicate function to check if a card is of a specific type
bool is_of_type(const CreditCardInfo &card, const std::string &card_type) {
  return card.type == card_type;
}

// Define a from_json function to map JSON fields to the struct
void from_json(const json &j, CreditCardInfo &card) {
  j.at("type").get_to(card.type);
  j.at("name").get_to(card.name);
  j.at("number").get_to(card.number);
  j.at("cvv").get_to(card.cvv);
  j.at("expiry").get_to(card.expiry);
  j.at("amount").get_to(card.amount);
}

// Define a to_json function to map CreditCardInfo struct to a JSON object
void to_json(nlohmann::json &j, const CreditCardInfo &card) {
  j = nlohmann::json{{"type", card.type},     {"name", card.name},
                     {"number", card.number}, {"cvv", card.cvv},
                     {"expiry", card.expiry}, {"amount", card.amount}};
}
