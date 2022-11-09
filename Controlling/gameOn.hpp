#include "ICommand.hpp"
#include "../Components/Game.hpp"
#ifndef OOP_LAB1_VERSION2_GAMEON_HPP
#define OOP_LAB1_VERSION2_GAMEON_HPP

class gameOn: public ICommand {
public:
  gameOn(Game * game);
  void execute() override;
private:
  Game * game_;
};

#endif //OOP_LAB1_VERSION2_GAMEON_HPP
