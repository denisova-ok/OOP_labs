#include "GameLog.hpp"


GameLog::GameLog()
{}

std::string GameLog::send(Message *message)
{
  GameMessage * game_temp = dynamic_cast<GameMessage*>(message);
  if (game_temp != nullptr) {
    return game_temp->getMessage();
  }
  return "";
}

GameLog::~GameLog()
{}


/*
std::string GameLog::getMessage() const
{
  return message_;
}*/


