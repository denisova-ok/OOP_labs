#ifndef OOP_LAB1_VERSION2_WALLCOLLAPSE_HPP
#define OOP_LAB1_VERSION2_WALLCOLLAPSE_HPP
#include "mapEvent.hpp"

class wallCollapse: public mapEvent {
public:
  wallCollapse();
//  void trigger(Field * field) override;
  void changeField(Field * field) override;
  mapEvent * clone() override;
  ~wallCollapse() override;
};

#endif //OOP_LAB1_VERSION2_WALLCOLLAPSE_HPP
