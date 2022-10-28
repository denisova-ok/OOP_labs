#include "ErrorLog.hpp"

ErrorLog::ErrorLog()
{}

std::string ErrorLog::send(Message *message)
{
  ErrorMessage * error_temp = dynamic_cast<ErrorMessage*>(message);
  if (error_temp != nullptr) {
    return error_temp->getMessage();
  }
  return "";
}

ErrorLog::~ErrorLog()
{}


