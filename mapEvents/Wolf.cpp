#include "Wolf.hpp"

Wolf::Wolf()
{
}

Wolf::~Wolf()
{
}

mapEvent *Wolf::clone()
{
  return new Wolf();
}

void Wolf::changeField(Field *field)
{
  field->getUnit()->setHealth(field->getUnit()->getHealth() - 5 < 0 ? 0 : field->getUnit()->getHealth() - 5);
}
