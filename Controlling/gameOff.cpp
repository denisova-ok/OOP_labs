#include "gameOff.hpp"

gameOff::gameOff(Game *game)
{
  game_ = game;
}

void gameOff::execute()
{
  game_->off();
}
