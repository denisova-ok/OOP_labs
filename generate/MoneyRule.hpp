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
  int cells = field->getHeight() * field->getWidth();
  int available_cells = cells - field->getEventsCount();
  int counter = (count > available_cells) ? available_cells : count;
  counter = (counter > cells - field->getImpCount()) ? cells - field->getImpCount() : counter;
  std::mt19937 engine; // mt19937 как один из вариантов
  engine.seed(std::time(nullptr));
  int i, j;
  for (int k = 0; k < counter; k++) {
    i = engine() % field->getHeight();
    j = engine() % field->getWidth();
    while (field->getCell(i,j)->getEvent() || (!field->getCell(i, j)->getPatency()) || ((i == 4) && (j == 4))) {
      i = engine() % field->getHeight();
      j = engine() % field->getWidth();
    }
    Money * money = new Money(money_count);
    field->getCell(i, j)->setEvent(money);
    field->changeEventsCount(1);
  }
}

#endif //OOP_LAB1_VERSION2_MONEYRULE_HPP
