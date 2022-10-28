#include "Unit.hpp"


Unit::Unit(): health_(100), power_(5), money_(25), pos_({0, 0})
{}


Unit::Unit(int health, int power, int money, Position pos):
  health_(health), power_(power), money_(money)
{
  pos_.x = pos.x;
  pos_.y = pos.y;
}


Unit::Unit(const Unit &unit)
{
  health_ = unit.health_;
  power_ = unit.power_;
  money_ = unit.money_;
  pos_.x = unit.pos_.x;
  pos_.y = unit.pos_.y;
}

void Unit::setPosition(int x, int y)
{
  pos_.x = x;
  pos_.y = y;
}

void Unit::move(Direction dir)
{
  switch (int(dir)) {
  case 0:
    this->setPosition(pos_.x, pos_.y + 1);
    break;
  case 1:
    this->setPosition(pos_.x, pos_.y - 1);
    break;
  case 2:
    this->setPosition(pos_.x - 1, pos_.y);
    break;
  case 3:
    this->setPosition(pos_.x + 1, pos_.y);
    break;
  }
}

Position Unit::getPosition() const
{
  return pos_;
}

int Unit::getMoney() const
{
  return money_;
}

int Unit::getHealth() const
{
  return health_;
}

int Unit::getPower() const
{
  return power_;
}

void Unit::setHealth(int health)
{
  health_ = health;
}

void Unit::setMoney(int money)
{
  money_ = money;
}

void Unit::setPower(int power)
{
  power_ = power;
}

bool Unit::checkDeath() const
{
  if (health_ == 0) {
    return true;
  }
  return false;
}

void Unit::death()
{
  health_ = 0;
  power_ = 0;
  money_ = 0;
}


