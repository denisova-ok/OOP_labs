#include "ErrorMessage.hpp"

ErrorMessage::ErrorMessage()
{
  message_ = "_error_:";
}

ErrorMessage::ErrorMessage(std::string m)
{
  message_ = "_error_:" + m;
}

std::string ErrorMessage::getMessage() const
{
  return message_;
}

std::ostream &operator<<(std::ostream &out, const ErrorMessage &m)
{
  out << m.message_ << std::endl;
  return out;
}

ErrorMessage::~ErrorMessage()
{}
