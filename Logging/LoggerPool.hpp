#include <vector>
#include "IObserver.hpp"
#include "LogLevel.hpp"
#include "ConsoleLogger.hpp"
#include "FileLogger.hpp"
#include "GameLog.hpp"
#include "ErrorLog.hpp"
#include "EventLog.hpp"
#ifndef OOP_LAB1_VERSION2_LOGGERPOOL_HPP
#define OOP_LAB1_VERSION2_LOGGERPOOL_HPP

class LoggerPool: public IObserver {
public:
  LoggerPool();
  void update(Message * message) override;
  void addLogger(Logger * logger);
  void removeLogger();
  void addLevel(LogLevel * level);
  void config();
  ~LoggerPool();
private:

  std::vector<LogLevel *> levels;
  std::vector<Logger *> loggers;
};

#endif //OOP_LAB1_VERSION2_LOGGERPOOL_HPP
