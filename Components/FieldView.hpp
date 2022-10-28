#include "Field.hpp"
#include <iostream>
#include <conio.h>
#ifndef OOP_LAB1_VERSION2_FIELDVIEW_HPP
#define OOP_LAB1_VERSION2_FIELDVIEW_HPP

class FieldView {
public:
  FieldView(Field * field);
  ~FieldView();
  Field * getField() const;
  void showField();
private:
  Field * field_;
};

#endif //OOP_LAB1_VERSION2_FIELDVIEW_HPP
