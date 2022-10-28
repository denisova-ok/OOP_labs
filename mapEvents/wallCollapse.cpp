#include "wallCollapse.hpp"
/*
void wallCollapse::trigger(Field *field)
{
  changeField(field);
}*/

void wallCollapse::changeField(Field *field)
{
  field->getCell(field->getUnit()->getPosition().y, field->getUnit()->getPosition().x)->setPatency(false);
  int y = field->getUnit()->getPosition().y;
  int x = field->getUnit()->getPosition().x;
  field->notify(new GameMessage("change in patency\n"));
}

mapEvent *wallCollapse::clone()
{
  return new wallCollapse();
}

wallCollapse::wallCollapse()
{}

wallCollapse::~wallCollapse()
{}
