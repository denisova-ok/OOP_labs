#include "GameMessage.hpp"

GameMessage::GameMessage()
{
  message_ = "_game_:";
}

/*
std::string GameMessage::createPrefix()
{
  return "_game_";
}*/

GameMessage::GameMessage(std::string m)
{
  message_ = "_game_:" + m;
}

std::string GameMessage::getMessage() const
{
  return message_;
}

std::ostream &operator<<(std::ostream &out, const GameMessage &m)
{
  out << m.message_ << std::endl;
  return out;
}

GameMessage::~GameMessage()
{}

