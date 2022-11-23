#pragma once
#include "Field.hpp"
#include "FieldView.hpp"
#include "../enemyEvents/Director.hpp"
#include "../mapEvents/wallCollapse.hpp"
#include "../enemyEvents/wolfBuilder.hpp"
#include "../mapEvents/Merchant.hpp"
#include "../Logging/LoggerPool.hpp"
#include "../generate/FieldGenerator.hpp"
#include "../generate/PatencyRule.hpp"
#include "../generate/MoneyRule.hpp"
#include "../generate/WinRule.hpp"
#include "../generate/WolfRule.hpp"
#include "../generate/unitPositionRule.hpp"
#ifndef OOP_LAB1_VERSION2_GAME_HPP
#define OOP_LAB1_VERSION2_GAME_HPP

class Game {
public:
  Game();
  void chooseLevel();
  Field * getField() const;
  ~Game();
private:
  void setLevel(std::string level);
  Field * field_;

};

#endif //OOP_LAB1_VERSION2_GAME_HPP
