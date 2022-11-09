#include "Controller.hpp"

Controller::Controller(FieldView *viewer)
{
  viewer_ = viewer;
}

FieldView *Controller::getViewer() const
{
  return viewer_;
}
