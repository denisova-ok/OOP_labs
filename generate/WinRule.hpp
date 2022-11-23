#include "../Components/Field.hpp"
#include "../mapEvents/Win.hpp"
#ifndef OOP_LAB1_VERSION2_WINRULE_HPP
#define OOP_LAB1_VERSION2_WINRULE_HPP

template <size_t x, size_t y>
class WinRule {
public:
  void fill(Field * field);
};

template<size_t x, size_t y>
void WinRule<x, y>::fill(Field *field)
{
  mapEvent * win = new Win();
  field->getCell(y % field->getHeight(), x % field->getWidth())->setEvent(win);
}

#endif //OOP_LAB1_VERSION2_WINRULE_HPP
