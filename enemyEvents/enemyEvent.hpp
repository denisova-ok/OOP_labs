#pragma once
#ifndef OOP_LAB1_VERSION2_ENEMYEVENT_HPP
#define OOP_LAB1_VERSION2_ENEMYEVENT_HPP
#include "../Components/Event.hpp"
#include "../Components/Field.hpp"


class enemyEvent: public Event {
public:
  enemyEvent();
  void trigger(Field * field) override;
  void changeUnit(Unit * unit);
  void setChangeHealth(int ch);
  void setChangePower(int cp);
  void setChangeMoney(int cm);
  ~enemyEvent();
private:
  int changeHealth_;
  int changePower_;
  int changeMoney_;
};

#endif //OOP_LAB1_VERSION2_ENEMYEVENT_HPP
