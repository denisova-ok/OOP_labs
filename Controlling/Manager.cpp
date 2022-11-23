#include "Manager.hpp"

Manager::Manager(Multipult *mp)
{
  mp_ = mp;
}

void Manager::manage()
{
  std::ifstream in("./operations.txt"); // окрываем файл для чтения
  int result = 0;
  if (in.is_open())
  {
    char c;
    for (int i = 0; i < 6; i++) {
      in >> c;
      if (c >= 97 && c <= 122) result++;
      commands.push_back(c);
      keys.insert(commands[i]);
    }
  }
  in.close();
  if (keys.size() == 6 && result == 6) {
    mp_->setKey(commands[0], GAMEON);
    mp_->setKey(commands[1], GAMEOFF);
    mp_->setKey(commands[2], MOVEUP);
    mp_->setKey(commands[3], MOVEDOWN);
    mp_->setKey(commands[4], MOVELEFT);
    mp_->setKey(commands[5], MOVERIGHT);
    mp_->getGame()->getField()->notify(new GameMessage("file control is set\n"));
  } else {
    mp_->setKey('b', GAMEON);
    mp_->setKey('e', GAMEOFF);
    mp_->setKey('w', MOVEUP);
    mp_->setKey('s', MOVEDOWN);
    mp_->setKey('a', MOVELEFT);
    mp_->setKey('d', MOVERIGHT);
    mp_->getGame()->getField()->notify(new GameMessage("the default control is set: press 'w' to move up, 'a' to move left, 's' to move down, 'd' to move right\n"));
  }
}

Manager::~Manager()
{}
