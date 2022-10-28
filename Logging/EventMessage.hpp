#include "Message.hpp"
#ifndef OOP_LAB1_VERSION2_EVENTMESSAGE_HPP
#define OOP_LAB1_VERSION2_EVENTMESSAGE_HPP

class EventMessage: public Message{
public:
  EventMessage();
  EventMessage(std::string m);
  std::string getMessage() const;
  ~EventMessage() override;
  friend std::ostream& operator<<(std::ostream& out, const EventMessage & m);
private:
  std::string message_;
};

#endif //OOP_LAB1_VERSION2_EVENTMESSAGE_HPP
