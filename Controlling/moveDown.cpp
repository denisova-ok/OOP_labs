#include "moveDown.hpp"


moveDown::moveDown(Game *game)
{
  game_ = game;
}

void moveDown::execute()
{
  game_->getField()->moveUnit(DOWN);
}
