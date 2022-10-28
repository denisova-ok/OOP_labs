#pragma once
#ifndef OOP_LAB1_VERSION2_UNIT_HPP
#define OOP_LAB1_VERSION2_UNIT_HPP

struct Position{
  int x;
  int y;
};

enum Direction{UP, DOWN, LEFT, RIGHT};

class Unit {
public:
  Unit();
  Unit(int health, int power, int money, Position pos);
  Unit(const Unit &unit);
  void setPosition(int x, int y);
  Position getPosition() const;
  void move(Direction dir);
  bool checkDeath() const;
  void death();
  int getHealth() const;
  int getPower() const;
  int getMoney() const;
  void setHealth(int health);
  void setMoney(int money);
  void setPower(int power);


private:
  int health_;
  int power_;
  int money_;
  Position pos_;
};
#endif //OOP_LAB1_VERSION2_UNIT_HPP
