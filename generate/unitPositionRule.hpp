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
  field->getUnit()->setPosition(j % field->getWidth(), i % field->getHeight());
}

#endif //OOP_LAB1_VERSION2_UNITPOSITIONRULE_HPP
