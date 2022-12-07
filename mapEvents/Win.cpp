#include "Win.hpp"
/*
void Win::trigger(Field *field)
{
  changeField(field);
}*/

void Win::changeField(Field *field)
{
  if (field->getUnit()->getHealth() > 0) {
    field->getUnit()->setHealth(0);
    field->getUnit()->setPower(100);
    field->getUnit()->setMoney(1000000);
    field->notify(new GameMessage("game over: win\n"));
  }

}

mapEvent *Win::clone()
{
  return new Win();
}

Win::Win()
{}

Win::~Win()
{}
