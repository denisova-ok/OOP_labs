#include "Game.hpp"

void Game::on()
{
  condition = 1;
  std::cout << "game on" << std::endl;
}

void Game::off()
{
  condition = 0;
  std::cout << "game over" << std::endl;
}

Game::Game(Field *field)
{
  field_ = field;
  this->on();
}

Game::~Game()
{
  this->off();
}

Field *Game::getField() const
{
  return field_;
}

