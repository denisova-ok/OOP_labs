#include "EventMessage.hpp"
/*
std::string EventMessage::createPrefix()
{
  return "_event_";
}*/
EventMessage::EventMessage()
{
  message_ = "_event_:";
}

EventMessage::EventMessage(std::string m)
{
  message_ = "_event_:" + m;
}

std::string EventMessage::getMessage() const
{
  return message_;
}

std::ostream &operator<<(std::ostream &out, const EventMessage &m)
{
  out << m.message_ << std::endl;
  return out;
}

EventMessage::~EventMessage()
{}
