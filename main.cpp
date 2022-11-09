#include <iostream>
#include "Components/Unit.hpp"
#include "Components/Field.hpp"
#include "Components/FieldView.hpp"
#include "enemyEvents/Director.hpp"
#include "mapEvents/wallCollapse.hpp"
#include "mapEvents/Money.hpp"
#include "enemyEvents/thiefBuilder.hpp"
#include "mapEvents/Merchant.hpp"
#include "mapEvents/Win.hpp"
#include "enemyEvents/wolfBuilder.hpp"
#include "Logging/GameMessage.hpp"
#include "Logging/EventMessage.hpp"
#include "Logging/GameLog.hpp"
#include "Logging/LoggerPool.hpp"
#include "Logging/ConsoleLogger.hpp"
#include "Logging/FileLogger.hpp"
#include "Logging/ErrorLog.hpp"
#include "Logging/EventLog.hpp"
#include "Components/Game.hpp"
#include "Controlling/gameOn.hpp"
#include "Controlling/gameOff.hpp"
#include "Controlling/moveUp.hpp"
#include "Controlling/moveDown.hpp"
#include "Controlling/moveRight.hpp"
#include "Controlling/moveLeft.hpp"
#include "Controlling/Multipult.hpp"
#include "Controlling/Manager.hpp"
#include "Controlling/ConsoleCommandReader.hpp"
#include "Components/Controller.hpp"

int main()
{

  Field * f = new Field();
  Game * g = new Game(f);

  Multipult * pult = new Multipult(g);
  Manager *mg = new Manager(pult);
  mg->manage();
  ConsoleCommandReader  * reader = new ConsoleCommandReader(pult);
  f->getUnit()->setHealth(5);

  enemyEventBuilder * builder = new wolfBuilder();
  Director * dir = new Director(builder);
  enemyEvent * ev = dir->make();
  f->getCell(1, 0)->setEvent(ev);

  FieldView  * fielder = new FieldView(f);
  Controller * controller = new Controller(fielder);
  f->addController(controller);
  controller->getViewer()->showField();

 // f->getCell(1, 0)->setPatency(0);
  LoggerPool * lp = new LoggerPool();
  lp->config();
  f->addObserver(lp);
  std::cout << f->getCell(1, 1)->getPatency() << std::endl;
  reader->read();
  delete dir;
  delete builder;
  delete fielder;
  delete lp;

  delete g;


  return 0;
}
