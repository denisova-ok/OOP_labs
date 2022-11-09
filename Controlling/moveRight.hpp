#include "ICommand.hpp"
#include "../Components/Game.hpp"
#ifndef OOP_LAB1_VERSION2_MOVERIGHT_HPP
#define OOP_LAB1_VERSION2_MOVERIGHT_HPP

class moveRight: public ICommand {
public:
  moveRight(Game * game);
  void execute() override;
private:
  Game * game_;
};

#endif //OOP_LAB1_VERSION2_MOVERIGHT_HPP
