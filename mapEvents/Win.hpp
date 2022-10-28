#ifndef OOP_LAB1_VERSION2_WIN_HPP
#define OOP_LAB1_VERSION2_WIN_HPP
#include "mapEvent.hpp"

class Win: public mapEvent {
public:
  Win();
//  void trigger(Field * field) override;
  void changeField(Field * field) override;
  mapEvent * clone() override;
  ~Win() override;
};

#endif //OOP_LAB1_VERSION2_WIN_HPP
