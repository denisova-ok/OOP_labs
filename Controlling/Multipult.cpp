#include "Multipult.hpp"

Multipult::Multipult(Game * game)
{
  game_ = game;
  commands.insert(std::make_pair(GAMEON, new gameOn(game_)));
  commands.insert(std::make_pair(GAMEOFF, new gameOff(game_)));
  commands.insert(std::make_pair(MOVEUP, new moveUp(game_)));
  commands.insert(std::make_pair(MOVEDOWN, new moveDown(game_)));
  commands.insert(std::make_pair(MOVELEFT, new moveLeft(game_)));
  commands.insert(std::make_pair(MOVERIGHT, new moveRight(game_)));
}

void Multipult::pressOn(char button)
{
  if (management.size() == 6 && management.count(button) == 1) {
    commands[management[button]]->execute();
  }
}

void Multipult::setKey(char sym, cmds command)
{
  management.insert(std::make_pair(sym, command));
}

Game *Multipult::getGame() const
{
  return game_;
}

Multipult::~Multipult()
{
  for (auto command: commands) {
    delete command.second;
  }
}

