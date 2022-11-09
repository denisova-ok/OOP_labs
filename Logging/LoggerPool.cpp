#include "LoggerPool.hpp"

LoggerPool::LoggerPool()
{}

void LoggerPool::addLogger(Logger * logger)
{
  loggers.push_back(logger);
}

void LoggerPool::removeLogger()
{
  loggers.pop_back();
}

LoggerPool::~LoggerPool()
{
  for (auto lg:loggers) {
    delete lg;
  }
  for (auto lv:levels) {
    delete lv;
  }
}

void LoggerPool::addLevel(LogLevel *level)
{
  levels.push_back(level);
}

void LoggerPool::update(Message *message)
{
  for (auto lg: loggers) {
    for (auto lv: levels) {
      auto temp = lv->send(message);
      if (temp != "") {
        lg->print(temp);
      }
    }
  }
  delete message;
}

void LoggerPool::config()
{
  std::cout << "enter loggers and levels you want to use (1st line - loggers, 2nd line - levels)" << std::endl;
  std::string loggers_, levels_;
  std::getline(std::cin,loggers_);
  std::getline(std::cin, levels_);
  if (loggers_.find("Console") != std::string::npos)
    this->addLogger(new ConsoleLogger());
  if (loggers_.find("File") != std::string::npos)
    this->addLogger(new FileLogger("logs.txt"));
  if (levels_.find("Errors") != std::string::npos) this->addLevel(new ErrorLog()); else {
    if (levels_.find("Events") != std::string::npos)
      this->addLevel(new EventLog());
    if (levels_.find("Game") != std::string::npos)
      this->addLevel(new GameLog());
  }
}
