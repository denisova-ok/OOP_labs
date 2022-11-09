#include "ICommand.hpp"
#include "../Components/Game.hpp"
#ifndef OOP_LAB1_VERSION2_GAMEOFF_HPP
#define OOP_LAB1_VERSION2_GAMEOFF_HPP

class gameOff: public ICommand {
public:
  gameOff(Game * game);
  void execute() override;
private:
  Game * game_;
};

#endif //OOP_LAB1_VERSION2_GAMEOFF_HPP
