#include "mapEvent.hpp"
#ifndef OOP_LAB1_VERSION2_WOLF_HPP
#define OOP_LAB1_VERSION2_WOLF_HPP

class Wolf: public mapEvent {
public:
  Wolf();
//  void trigger(Field * field) override;
  void changeField(Field * field) override;
  mapEvent * clone() override;
  ~Wolf() override;
};

#endif //OOP_LAB1_VERSION2_WOLF_HPP
