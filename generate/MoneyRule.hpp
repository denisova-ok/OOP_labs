#include <ctime>
#include <random>
#include "../Components/Field.hpp"
#include "../mapEvents/Money.hpp"
#ifndef OOP_LAB1_VERSION2_MONEYRULE_HPP
#define OOP_LAB1_VERSION2_MONEYRULE_HPP

template <size_t money_count, size_t count>
class MoneyRule {
public:
  void fill(Field * field);
};

template<size_t money_count, size_t count>
void MoneyRule<money_count, count>::fill(Field *field)
{
  std::mt19937 engine; // mt19937 как один из вариантов
  engine.seed(std::time(nullptr));
  int i, j;
  for (int k = 0; k < count; k++) {
    i = engine() % field->getHeight();
    j = engine() % field->getWidth();
    Money * money = new Money(money_count);
    field->getCell(i, j)->setEvent(money);
  }

}

#endif //OOP_LAB1_VERSION2_MONEYRULE_HPP
