#include "enemyEvent.hpp"

void enemyEvent::trigger(Field *field)
{
  changeUnit(field->getUnit());
  field->notify(new GameMessage("enemy\n"));
  //delete en;
}

void enemyEvent::changeUnit(Unit *unit)
{
  if (changeHealth_ > 0) {
    (unit->getHealth() + changeHealth_ > 100 )? unit->setHealth(100) : unit->setHealth(unit->getHealth() + changeHealth_);
  }
  if (changeHealth_ < 0) {
    (unit -> getHealth() + changeHealth_ < 0) ? unit->setHealth(0) : unit->setHealth(unit->getHealth() + changeHealth_);
  }
  if (changePower_ > 0) {
    (unit->getPower() + changePower_ > 100) ? unit->setPower(100): unit->setPower(unit->getPower() + changePower_);
  }
  if (changePower_ < 0) {
    (unit->getPower() + changePower_ < 0) ? unit->setPower(0): unit->setPower(unit->getPower() + changePower_);
  }
  if (changeMoney_ < 0) {
    (unit->getMoney() + changeMoney_ < 0) ? unit->setMoney(0) : unit->setMoney(unit->getMoney() + changeMoney_);
  } else {
    unit->setMoney(unit->getMoney() + changeMoney_);
  }
}

void enemyEvent::setChangeHealth(int ch)
{
  changeHealth_ = ch;
}

void enemyEvent::setChangePower(int cp)
{
  changePower_ = cp;
}

void enemyEvent::setChangeMoney(int cm)
{
  changeMoney_ = cm;
}

enemyEvent::enemyEvent():changeHealth_(0), changePower_(0), changeMoney_(0)
{}

enemyEvent::~enemyEvent()
{}
