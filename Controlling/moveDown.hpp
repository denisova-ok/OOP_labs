#include "ICommand.hpp"
#include "../Components/Game.hpp"
#ifndef OOP_LAB1_VERSION2_MOVEDOWN_HPP
#define OOP_LAB1_VERSION2_MOVEDOWN_HPP

class moveDown: public ICommand {
public:
  moveDown(Game * game);
  void execute() override;
private:
  Game * game_;
};

#endif //OOP_LAB1_VERSION2_MOVEDOWN_HPP
