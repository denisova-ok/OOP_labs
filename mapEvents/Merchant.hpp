#ifndef OOP_LAB1_VERSION2_MERCHANT_HPP
#define OOP_LAB1_VERSION2_MERCHANT_HPP
#include "mapEvent.hpp"

class Merchant: public mapEvent {
public:
  Merchant();
//  void trigger(Field * field) override;
  void changeField(Field * field) override;
  mapEvent * clone() override;
  ~Merchant() override;
};

#endif //OOP_LAB1_VERSION2_MERCHANT_HPP
