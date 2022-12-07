#include "../Components/Field.hpp"
#include "../mapEvents/Win.hpp"
#ifndef OOP_LAB1_VERSION2_WINRULE_HPP
#define OOP_LAB1_VERSION2_WINRULE_HPP

template <size_t x = 4, size_t y = 4>
class WinRule {
public:
  void fill(Field * field);
};

template<size_t x, size_t y>
void WinRule<x, y>::fill(Field *field)
{
  if (field->getWin()) return;
  Position w{x, y};
  if (!(w.y == 0 || w.x == field->getWidth() - 1) || (field->getCell(y, x)->getEvent())) {
    w.x = 4;
    w.y = 4;
  }
  mapEvent * win = new Win();
  field->getCell(w.y % field->getHeight(), w.x % field->getWidth())->setEvent(win);
  field->setWin(true);
  field->changeEventsCount(1);
}

#endif //OOP_LAB1_VERSION2_WINRULE_HPP
