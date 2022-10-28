#pragma once
#include <iostream>
#include "Event.hpp"
//#include "Unit.hpp"
//#include "Field.hpp"
#ifndef OOP_LAB1_VERSION2_CELL_HPP
#define OOP_LAB1_VERSION2_CELL_HPP

class Field;

class Cell {
public:
  Cell();
  Cell(bool patency, Event * event);
  void reaction(Field * field);
  void setPatency(bool p);
  void setEvent(Event * event);
  bool getPatency() const;
  const Event * getEvent() const;

private:
  bool patency_;
  Event * event_;
//  bool unitHere_;
};
#endif //OOP_LAB1_VERSION2_CELL_HPP
