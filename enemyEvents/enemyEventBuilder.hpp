#pragma once
#ifndef OOP_LAB1_VERSION2_ENEMYEVENTBUILDER_HPP
#define OOP_LAB1_VERSION2_ENEMYEVENTBUILDER_HPP
#include "enemyEvent.hpp"

class enemyEventBuilder {
public:
  virtual void changeHealth() = 0;
  virtual void changePower() = 0;
  virtual void changeMoney() = 0;
  virtual enemyEvent * getUnitEvent() = 0;
  virtual ~enemyEventBuilder() = 0;
};

#endif //OOP_LAB1_VERSION2_ENEMYEVENTBUILDER_HPP
