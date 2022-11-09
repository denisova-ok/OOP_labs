#include "ConsoleCommandReader.hpp"

ConsoleCommandReader::ConsoleCommandReader(Multipult *mp)
{
  pult_ = mp;
}

void ConsoleCommandReader::read()
{
  char command;
  while (!pult_->getGame()->getField()->getUnit()->checkDeath()) {
    std::cin >> command;
    pult_->pressOn(command);
  }
}
