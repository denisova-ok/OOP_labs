#include "Game.hpp"

Game::Game()
{
  chooseLevel();
}

Game::~Game()
{
  delete field_;
}

Field *Game::getField() const
{
  return field_;
}

void Game::chooseLevel()
{
  std::cout << "Choose game level: 1 or 2" << std::endl;
  std::string level;
  getline(std::cin, level);
  setLevel(level);
}

void Game::setLevel(std::string level)
{
  switch (atoi(level.c_str()))
  {
  case 2:
    FieldGenerator<WinRule<4, 4>, NPCRule<WOLF, 3>, PatencyRule<6>, unitPositionRule<0, 0>> gen2;
    field_ = gen2.generate();
    break;
  default:
  case 1:
    FieldGenerator<WinRule<4, 4>, NPCRule<WOLF, 1>, PatencyRule<4>, unitPositionRule<1, 2>> gen1;
    field_ = gen1.generate();
    break;
  }
  checkWin();
}

void Game::checkWin()
{
  if (!field_->getWin()) {
    mapEvent * win = new Win();
    field_->getCell(4, 4)->setEvent(win);
    field_->setWin(true);
  }
}

