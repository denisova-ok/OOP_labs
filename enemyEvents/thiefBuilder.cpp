#include "thiefBuilder.hpp"

thiefBuilder::thiefBuilder()
{
  ue = new enemyEvent();
}

thiefBuilder::~thiefBuilder()
{
  delete ue;
}

enemyEvent *thiefBuilder::getUnitEvent()
{
  return ue;
}

void thiefBuilder::changeHealth()
{}

void thiefBuilder::changePower()
{}

void thiefBuilder::changeMoney()
{
  ue->setChangeMoney(-20);
}
