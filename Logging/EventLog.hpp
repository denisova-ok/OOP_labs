#include "LogLevel.hpp"
#include "EventMessage.hpp"
#ifndef OOP_LAB1_VERSION2_EVENTLOG_HPP
#define OOP_LAB1_VERSION2_EVENTLOG_HPP

class EventLog: public LogLevel {
public:
  EventLog();
  std::string send(Message * message) override;
  ~EventLog() override;
};

#endif //OOP_LAB1_VERSION2_EVENTLOG_HPP
