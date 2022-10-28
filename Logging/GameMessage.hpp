#include "Message.hpp"
#ifndef OOP_LAB1_VERSION2_GAMEMESSAGE_HPP
#define OOP_LAB1_VERSION2_GAMEMESSAGE_HPP

class GameMessage: public Message {
public:
  GameMessage();
  GameMessage(std::string m);
  std::string getMessage() const;
  ~GameMessage() override;
  friend std::ostream& operator<<(std::ostream& out, const GameMessage & m);
private:
  std::string message_;
};

#endif //OOP_LAB1_VERSION2_GAMEMESSAGE_HPP
