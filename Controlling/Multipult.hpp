#include <map>
#include <utility>
#include "ICommand.hpp"
#include "gameOn.hpp"
#include "gameOff.hpp"
#include "moveLeft.hpp"
#include "moveRight.hpp"
#include "moveDown.hpp"
#include "moveUp.hpp"
#ifndef OOP_LAB1_VERSION2_MULTIPULT_HPP
#define OOP_LAB1_VERSION2_MULTIPULT_HPP

enum cmds {GAMEON, GAMEOFF, MOVEUP, MOVEDOWN, MOVELEFT, MOVERIGHT};
class Manager;

class Multipult {
  friend class Manager;
public:
  Multipult(Game * game);
  void pressOn(char button);
  Game * getGame() const;

private:
  Game * game_;
  std::map<cmds, ICommand*> commands;
  std::map<char, cmds> management;
  void setKey(char sym, cmds command);

};

#endif //OOP_LAB1_VERSION2_MULTIPULT_HPP
