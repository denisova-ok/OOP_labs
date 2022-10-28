#include "FieldView.hpp"

FieldView::FieldView(Field * field)
{
  field_ = field;
}

FieldView::~FieldView()
{
//  delete field;
}

void FieldView::showField()
{
  int height = field_->getHeight();
  int width = field_->getWidth();
  if ((height < 0) || (width < 0)) {
    field_->notify(new ErrorMessage("field sizes < 0\n"));
  }
  for (int i = height - 1; i >= 0; i--) {
    for (int j = 0; j < width; j++) {
      if (field_->getUnit()->getPosition().x == j && field_->getUnit()->getPosition().y == i) {
        std::cout << "p:" << field_->getCell(i, j)->getPatency() << " " << "e: " << (field_->getCell(i, j)->getEvent() ==
                nullptr? "0 " : "1 ")  << "u: 1    ";
      } else {
        std::cout << "p:" << field_->getCell(i, j)->getPatency() << " " << "e: " << (field_->getCell(i, j)->getEvent() ==
                                                                                    nullptr? "0" : "1") << "u: 0    ";
      }
    }
    std::cout << std::endl << std::endl;
  }
}

Field *FieldView::getField() const
{
  return field_;
}
