#include "../Components/Field.hpp"
#include <cstdlib>
#ifndef OOP_LAB1_VERSION2_UNITPOSITIONRULE_HPP
#define OOP_LAB1_VERSION2_UNITPOSITIONRULE_HPP

template <size_t i, size_t j>
class unitPositionRule {
public:
  void fill(Field * field);
};

template<size_t i, size_t j>
void unitPositionRule<i, j>::fill(Field *field)
{
  if (i == 0 || j == field->getWidth() - 1) {
    field->getUnit()->setPosition(j % field->getWidth(), i % field->getHeight());
  } else {
    field->getUnit()->setPosition(0,0);
  }
}

#endif //OOP_LAB1_VERSION2_UNITPOSITIONRULE_HPP
