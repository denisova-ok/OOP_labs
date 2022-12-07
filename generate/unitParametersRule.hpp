#include "../Components/Field.hpp"
#ifndef OOP_LAB1_VERSION2_UNITPARAMETERSRULE_HPP
#define OOP_LAB1_VERSION2_UNITPARAMETERSRULE_HPP


template<size_t health, size_t money, size_t power>
class unitParametersRule {
public:
  void fill(Field * field);
};

template<size_t health, size_t money, size_t power>
void unitParametersRule<health, money, power>::fill(Field *field)
{
  field->getUnit()->setHealth((health > 0) ? health: 20);
  field->getUnit()->setMoney((money > 0) ? money : 15);
  field->getUnit()->setPower((power > 0) ? power: 5);
}

#endif //OOP_LAB1_VERSION2_UNITPARAMETERSRULE_HPP
