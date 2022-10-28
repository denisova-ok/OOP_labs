#ifndef OOP_LAB1_VERSION2_MONEY_HPP
#define OOP_LAB1_VERSION2_MONEY_HPP
#include "mapEvent.hpp"

class Money: public mapEvent {
public:
  Money(int m);
//  void trigger(Field * field);
  void changeField(Field * field);
  mapEvent * clone();
  ~Money() override;
private:
  int money_;
};

#endif //OOP_LAB1_VERSION2_MONEY_HPP
