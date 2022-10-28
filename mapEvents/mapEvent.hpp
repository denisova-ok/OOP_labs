#ifndef OOP_LAB1_VERSION2_MAPEVENT_HPP
#define OOP_LAB1_VERSION2_MAPEVENT_HPP
#include "../Components/Event.hpp"
#include "../Components/Field.hpp"

class mapEvent: public Event {
public:
  void trigger(Field * field) final;
  virtual void changeField(Field * field) = 0;
  virtual mapEvent * clone() = 0;
  virtual ~mapEvent() = 0;
};

#endif //OOP_LAB1_VERSION2_MAPEVENT_HPP
