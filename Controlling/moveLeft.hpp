#include "ICommand.hpp"
#include "../Components/Game.hpp"
#ifndef OOP_LAB1_VERSION2_MOVELEFT_HPP
#define OOP_LAB1_VERSION2_MOVELEFT_HPP

class moveLeft: public ICommand {
public:
  moveLeft(Game * game);
  void execute() override;
private:
  Game * game_;
};

#endif //OOP_LAB1_VERSION2_MOVELEFT_HPP
