#pragma once
#include "Message.hpp"
#ifndef OOP_LAB1_VERSION2_LOGGER_HPP
#define OOP_LAB1_VERSION2_LOGGER_HPP


class Logger {
public:
  virtual void print(std::string message) = 0;
  virtual ~Logger() = 0;
};

#endif //OOP_LAB1_VERSION2_LOGGER_HPP
