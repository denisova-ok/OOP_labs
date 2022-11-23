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
  int i, j;
  for (int k = 0; k < count; k++) {
    i = engine()  % field->getHeight();
    j = engine()  % field->getWidth();
    if (!field->getCell(i,j)->getEvent()) field->getCell(i, j)->setPatency(false);
  }
}

#endif //OOP_LAB1_VERSION2_PATENCYRULE_HPP
