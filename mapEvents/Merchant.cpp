#include "Merchant.hpp"
/*
void Merchant::trigger(Field *field)
{
  changeField(field);
}*/

void Merchant::changeField(Field *field)
{
  if (field->getUnit()->getMoney() >= 15) {
    field->getUnit()->setMoney(field->getUnit()->getMoney() - 15);
    field->getUnit()->setHealth((field->getUnit()->getHealth() + 10)> 100 ? 100: field->getUnit()->getHealth() + 10);
    field->notify(new GameMessage("change in unit's health, money\n"));
  }
}

Merchant::Merchant()
{}

mapEvent *Merchant::clone()
{
  return new Merchant();
}

Merchant::~Merchant()
{}
