#include "moveLeft.hpp"

moveLeft::moveLeft(Game *game)
{
  game_ = game;
}

void moveLeft::execute()
{
  game_->getField()->moveUnit(LEFT);
}

