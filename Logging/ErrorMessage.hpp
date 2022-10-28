#include "Message.hpp"
#ifndef OOP_LAB1_VERSION2_ERRORMESSAGE_HPP
#define OOP_LAB1_VERSION2_ERRORMESSAGE_HPP

class ErrorMessage: public Message {
public:
  ErrorMessage();
  ErrorMessage(std::string m);
  std::string getMessage() const;
  ~ErrorMessage() override;
  friend std::ostream& operator<<(std::ostream& out, const ErrorMessage & m);
private:
  std::string message_;
};

#endif //OOP_LAB1_VERSION2_ERRORMESSAGE_HPP
