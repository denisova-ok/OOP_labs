#include "ConsoleLogger.hpp"

void ConsoleLogger::print(std::string message)
{
  std::cout << message;
}

ConsoleLogger::~ConsoleLogger()
{}
