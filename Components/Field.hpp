#pragma once
#include <vector>
#include <iostream>
#include "Cell.hpp"
#include "Unit.hpp"
#include "../Logging/IObservable.hpp"
#include "../Logging/GameMessage.hpp"
#include "../Logging/ErrorMessage.hpp"
#include "../Logging/EventMessage.hpp"
#include "Controller.hpp"
#include "FieldView.hpp"
#ifndef OOP_LAB1_VERSION2_FIELD_HPP
#define OOP_LAB1_VERSION2_FIELD_HPP


class Field: public IObservable {
public:
  Field();
  Field(int &width, int &height, Unit &unit, std::vector<std::vector<Cell>> &mt);
  Field(const Field &field);
  Field(Field &&field) noexcept;
  Field& operator=(const Field& other);
  Field& operator=(Field&& other) noexcept;
  Cell  * getCell(int i, int j) const;
  int getHeight() const;
  int getWidth() const;
  Unit* getUnit();
  int getImpCount() const;
  int getEventsCount() const;
  bool getWin() const;
  void setWin(bool state);
  void changeImpCount(int n);
  void changeEventsCount(int n);
  void moveUnit(Direction dir);
  void addObserver(IObserver * o) override;
  void addController(Controller * c);
  void notify(Message * message) override;
  ~Field() override;

private:
  int height_;
  int width_;
  std::vector<std::vector<Cell>> *matrix_;
  Unit * unit_;
  IObserver * obs;
  Controller * controller;
  int imp_cell_count;
  int events;
  bool isWin;
};

#endif //OOP_LAB1_VERSION2_FIELD_HPP
