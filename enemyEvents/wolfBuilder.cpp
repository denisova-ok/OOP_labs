#include "wolfBuilder.hpp"

void wolfBuilder::changeHealth()
{
  ue->setChangeHealth(-5);
}

wolfBuilder::wolfBuilder()
{
  ue = new enemyEvent();
}

wolfBuilder::~wolfBuilder()
{
//  delete ue;
}

enemyEvent *wolfBuilder::getUnitEvent()
{
  return ue;
}

void wolfBuilder::changePower()
{
  ue->setChangePower(5);
}

void wolfBuilder::changeMoney()
{}
