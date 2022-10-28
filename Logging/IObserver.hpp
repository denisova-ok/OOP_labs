#include "Logger.hpp"
#include "Message.hpp"
#ifndef OOP_LAB1_VERSION2_IOBSERVABLE_HPP
#define OOP_LAB1_VERSION2_IOBSERVABLE_HPP

class IObserver {
public:
  virtual void update(Message * message) = 0;
};

#endif //OOP_LAB1_VERSION2_IOBSERVABLE_HPP
