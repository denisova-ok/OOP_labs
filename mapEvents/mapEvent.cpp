#include "mapEvent.hpp"

void mapEvent::trigger(Field *field)
{
  changeField(field);
}

mapEvent::~mapEvent()
{}
