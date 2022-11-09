#include "moveUp.hpp"

moveUp::moveUp(Game *game)
{
  game_ = game;
}

void moveUp::execute()
{
  game_->getField()->moveUnit(UP);
}
