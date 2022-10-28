#include "LogLevel.hpp"
#include "ErrorMessage.hpp"
#ifndef OOP_LAB1_VERSION2_ERRORLOG_HPP
#define OOP_LAB1_VERSION2_ERRORLOG_HPP

class ErrorLog: public LogLevel {
public:
  ErrorLog();
  std::string send(Message * message) override;
  ~ErrorLog() override;
};

#endif //OOP_LAB1_VERSION2_ERRORLOG_HPP
