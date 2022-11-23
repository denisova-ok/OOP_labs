#include <random>
#include <ctime>
#include "../Components/Field.hpp"
#include "../mapEvents/Wolf.hpp"
#ifndef OOP_LAB1_VERSION2_TESTWOLFRULE_HPP
#define OOP_LAB1_VERSION2_TESTWOLFRULE_HPP

template<size_t number>
class WolfRule {
public:
  void fill(Field * field);
};

template<size_t number>
void WolfRule<number>::fill(Field *field)
{
  std::mt19937 engine; // mt19937 как один из вариантов
  engine.seed(std::time(nullptr));
  int i, j;
  for (int k = 0; k < number; k++) {
    i = engine() % field->getHeight();
    j = engine() % field->getWidth();
    mapEvent * w = new Wolf();
    field->getCell(i, j)->setEvent(w);
  }

}


#endif //OOP_LAB1_VERSION2_TESTWOLFRULE_HPP
