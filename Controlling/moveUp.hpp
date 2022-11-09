#include "ICommand.hpp"
#include "../Components/Game.hpp"
#ifndef OOP_LAB1_VERSION2_MOVEUP_HPP
#define OOP_LAB1_VERSION2_MOVEUP_HPP

class moveUp: public ICommand {
public:
  moveUp(Game * game);
  void execute() override;
private:
  Game * game_;
};

#endif //OOP_LAB1_VERSION2_MOVEUP_HPP
