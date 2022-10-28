#ifndef OOP_LAB1_VERSION2_EVENT_HPP
#define OOP_LAB1_VERSION2_EVENT_HPP
//#include "Field.hpp"
//#include "Unit.hpp"

class Field;
//class Unit;

class Event {
public:
  virtual void trigger(Field * field) = 0;
};

#endif //OOP_LAB1_VERSION2_EVENT_HPP
