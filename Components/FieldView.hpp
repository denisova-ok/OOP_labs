#pragma once
#include "Field.hpp"
#include <iostream>
#include <conio.h>


class FieldView {
public:
  FieldView(Field * field);
  ~FieldView();
  Field * getField() const;
  void showField();
private:
  Field * field_;
};


