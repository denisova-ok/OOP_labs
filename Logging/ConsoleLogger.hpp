#include "Logger.hpp"
#ifndef OOP_LAB1_VERSION2_CONSOLELOGGER_HPP
#define OOP_LAB1_VERSION2_CONSOLELOGGER_HPP

class ConsoleLogger: public Logger {
public:
  void print(std::string message) override;
  ~ConsoleLogger() override;
};

#endif //OOP_LAB1_VERSION2_CONSOLELOGGER_HPP
