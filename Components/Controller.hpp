#pragma once

class FieldView;

class Controller {
public:
  Controller(FieldView * viewer);
  FieldView * getViewer() const;
private:
  FieldView * viewer_;
};
