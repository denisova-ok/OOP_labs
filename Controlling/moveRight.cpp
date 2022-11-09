#include "moveRight.hpp"

moveRight::moveRight(Game *game)
{
  game_ = game;
}

void moveRight::execute()
{
  game_->getField()->moveUnit(RIGHT);
}

