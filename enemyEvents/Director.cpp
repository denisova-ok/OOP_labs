#include "Director.hpp"

enemyEvent * Director::make() {
//  ub->createUnitEvent();
  builder->changeHealth();
  builder->changePower();
  builder->changeMoney();
  return builder->getUnitEvent();
}

Director::Director(enemyEventBuilder * b):builder(b)
{}

void Director::setBuilder(enemyEventBuilder * b)
{
  builder = b;
}
