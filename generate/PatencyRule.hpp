#include <random>
#include <ctime>
#include "../Components/Field.hpp"
#ifndef OOP_LAB1_VERSION2_PATENCYRULE_HPP
#define OOP_LAB1_VERSION2_PATENCYRULE_HPP

template <size_t count>
class PatencyRule {
public:
  void fill(Field * field);
};

template<size_t count>
void PatencyRule<count>::fill(Field *field)
{
  std::mt19937 engine; // mt19937 как один из вариантов
  engine.seed(std::time(nullptr));
  int cells = field->getHeight() * field->getWidth();
  int available_cells = cells - field->getWidth() - field->getHeight() + 1;
  int counter = (count > available_cells) ? available_cells : count;
  counter = (counter > cells - field->getEventsCount()) ? cells - field->getEventsCount(): counter;

  int i, j;
  for (int k = 0; k < counter; k++) {
    if ((field->getImpCount() == available_cells) || (field->getEventsCount()) == cells) break;
    i = engine() % field->getHeight();
    j = engine() % field->getWidth();
    while (field->getCell(i,j)->getEvent() || (i == 0) || (j == field->getWidth() - 1) || (!field->getCell(i, j)->getPatency())) {
      i = engine() % field->getHeight();
      j = engine() % field->getWidth();
    }
    field->getCell(i, j)->setPatency(false);
    field->changeImpCount(1);
  }
}

#endif //OOP_LAB1_VERSION2_PATENCYRULE_HPP
