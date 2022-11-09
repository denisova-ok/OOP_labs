#pragma once
#include "Field.hpp"
#include "FieldView.hpp"
#include "../enemyEvents/Director.hpp"
#include "../mapEvents/wallCollapse.hpp"
#include "../enemyEvents/wolfBuilder.hpp"
#include "../mapEvents/Merchant.hpp"
#include "../Logging/LoggerPool.hpp"
#ifndef OOP_LAB1_VERSION2_GAME_HPP
#define OOP_LAB1_VERSION2_GAME_HPP

class Game {
public:
  Game(Field * field);
  void on();
  void off();
  Field * getField() const;
  ~Game();
private:
  Field * field_;
  bool condition;

};

#endif //OOP_LAB1_VERSION2_GAME_HPP
