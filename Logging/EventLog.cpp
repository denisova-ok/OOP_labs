#include "EventLog.hpp"

EventLog::EventLog()
{}

std::string EventLog::send(Message *message)
{
  EventMessage * event_temp = dynamic_cast<EventMessage*>(message);
  if (event_temp != nullptr) {
    return event_temp->getMessage();
  }
  return "";
}

EventLog::~EventLog()
{}


