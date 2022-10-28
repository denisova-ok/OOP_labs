#pragma once
#include "Message.hpp"
#ifndef OOP_LAB1_VERSION2_LOGLEVEL_HPP
#define OOP_LAB1_VERSION2_LOGLEVEL_HPP

class LogLevel {
public:
  virtual std::string send(Message * message) = 0;
  virtual ~LogLevel() = 0;
};

#endif //OOP_LAB1_VERSION2_LOGLEVEL_HPP
