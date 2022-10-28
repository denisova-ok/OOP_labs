#include <string>
#include <vector>
#include "LogLevel.hpp"
#include "GameMessage.hpp"
#ifndef OOP_LAB1_VERSION2_GAMELOG_HPP
#define OOP_LAB1_VERSION2_GAMELOG_HPP

class GameLog: public LogLevel {
public:
  GameLog();
  std::string send(Message * message) override;
  ~GameLog() override;
};

#endif //OOP_LAB1_VERSION2_GAMELOG_HPP
