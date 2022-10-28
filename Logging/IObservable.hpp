#include "IObserver.hpp"
//#ifndef OOP_LAB1_VERSION2_IOBSERVABLE_HPP
//#define OOP_LAB1_VERSION2_IOBSERVABLE_HPP

class IObservable {
public:
  virtual void addObserver(IObserver * o) = 0;
  virtual void notify(Message * message) = 0;
  virtual ~IObservable() = 0;
};

//#endif //OOP_LAB1_VERSION2_IOBSERVABLE_HPP
