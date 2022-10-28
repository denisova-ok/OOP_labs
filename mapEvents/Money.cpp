#include "Money.hpp"
/*
void Money::trigger(Field *field)
{
  changeField(field);
}*/

void Money::changeField(Field *field)
{
  field->getUnit()->setMoney(field->getUnit()->getMoney() + money_);
  field->notify(new GameMessage("change in unit's money\n"));
}

Money::Money(int m): money_(m)
{}

mapEvent *Money::clone()
{
  return new Money(money_);
}

Money::~Money()
{}
