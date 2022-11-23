#include <random>
#include <ctime>
#include "../Components/Field.hpp"
#include "../mapEvents/Merchant.hpp"
#ifndef OOP_LAB1_VERSION2_MERCHANTRULE_HPP
#define OOP_LAB1_VERSION2_MERCHANTRULE_HPP

template<size_t number>
class MerchantRule {
public:
  void fill(Field * field);
};

template<size_t number>
void MerchantRule<number>::fill(Field *field)
{
  std::mt19937 engine; // mt19937 как один из вариантов
  engine.seed(std::time(nullptr));
  int i, j;
  for (int k = 0; k < number; k++) {
    i = engine() % field->getHeight();
    j = engine() % field->getWidth();
    mapEvent * mer = new Merchant();

    field->getCell(i, j)->setEvent(mer);
  }

}

#endif //OOP_LAB1_VERSION2_MERCHANTRULE_HPP
