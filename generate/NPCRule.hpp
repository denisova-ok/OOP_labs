#include <random>
#include <ctime>
#include "../mapEvents/Wolf.hpp"
#include "../mapEvents/Merchant.hpp"
#include "../Components/Field.hpp"
#ifndef OOP_LAB1_VERSION2_NPCRULE_HPP
#define OOP_LAB1_VERSION2_NPCRULE_HPP

enum evs {WOLF, MERCHANT};

template <evs name, size_t count>
class NPCRule {
public:
  void fill(Field * field);
};

template<evs name, size_t count>
void NPCRule<name, count>::fill(Field *field)
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
    mapEvent * ev = nullptr;
    switch (name) {
    case WOLF: {
      ev = new Wolf();
      break;
      }
    case MERCHANT: {
      ev = new Merchant();
      break;
      }
      default: {
        break;
      }
    }

  if (ev) {
    field->getCell(i, j)->setEvent(ev);
    field->changeEventsCount(1);
    }
  }
}

#endif //OOP_LAB1_VERSION2_NPCRULE_HPP
