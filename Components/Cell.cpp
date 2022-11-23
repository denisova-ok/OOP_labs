#include "Cell.hpp"

Cell::Cell():patency_(true), event_(nullptr)
{}

Cell::Cell(bool patency, Event *event): patency_(patency), event_(event)
{}

void Cell::reaction(Field * field)
{
  if (event_ != nullptr) {
    event_->trigger(field);
  }
  //std::cout << "reaction" << std::endl;
}

void Cell::setEvent(Event *event)
{
  if (event_ != nullptr) {
    delete event_;
  }
  event_ = event;
}


bool Cell::getPatency() const
{
  return patency_;
}

const Event *Cell::getEvent() const
{
  return event_;
}

void Cell::setPatency(bool p)
{
  patency_ = p;
}

Cell::~Cell()
{
  if (event_ != nullptr) {
    delete event_;
  }
}
