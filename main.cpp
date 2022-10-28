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

int main()
{
  Field * f = new Field();
  FieldView fielder(f);
  enemyEventBuilder * builder = new wolfBuilder();
  Director * dir = new Director(builder);
  enemyEvent * ev = dir->make();
 // f->getCell(0, 1)->setPatency(false);
  mapEvent * w = new Merchant();
  mapEvent * w1 = new wallCollapse();
  f->getCell(0, 1)->setEvent(ev);
  f->getCell(0, 2)->setEvent(w);
  f->getCell(0, 3)->setEvent(w1);
//  f->getCell(0, 1)->setPatency(false);
  LoggerPool * lp = new LoggerPool();
  f->addObserver(lp);
  lp->config();
  f->moveUnit(RIGHT);
  f->moveUnit(RIGHT);
  f->moveUnit(RIGHT);
  fielder.showField();
  delete lp;
  return 0;
}
