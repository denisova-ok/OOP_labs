#include <algorithm>
#include "Field.hpp"

Field::Field(): height_(5), width_(5), unit_(new Unit())
{
  matrix_ = new std::vector<std::vector<Cell>>;
  matrix_->resize(height_);
  for (int i = 0; i < height_; i++) {
//    matrix_[i].resize(width_);
    for (int j = 0; j < width_; j++) {
      (*matrix_)[i].emplace_back(*new Cell());
    }
  }
}

Field::Field(int &width, int &height, Unit  &unit, std::vector<std::vector<Cell>> &mt):
  width_(width), height_(height), unit_(new Unit(unit))
{
  matrix_ = new std::vector<std::vector<Cell>>;
  matrix_->resize(height_);
  for (int i = 0; i < height_; i++) {
//    matrix_->emplace_back(std::vector<Cell*>());
    for (int j = 0; j < width_; j++) {
      (*matrix_)[i].emplace_back(mt[i][j]);
    }
  }
}


Field::Field(const Field &field): width_(field.width_), height_(field.height_),
  unit_(new Unit(*field.unit_))
{
  this->matrix_ = new std::vector<std::vector<Cell>>;
  this->matrix_->resize(height_);
  for (int i = 0; i < height_; i++) {
    for (int j = 0; j < width_; j++) {
      //this->(*matrix_)[i].emplace_back((*field.matrix_)[i][j]);
      (*this->matrix_)[i].emplace_back((*field.matrix_)[i][j]);
    }
  }
}


Field::Field(Field &&field) noexcept
{
  height_ = field.height_;
  width_ = field.width_;
  unit_ = field.unit_;
  matrix_ = field.matrix_;
  field.matrix_ = nullptr;
  field.height_ = 0;
  field.width_ = 0;
  field.unit_ = nullptr;
}


Field &Field::operator=(const Field &other)
{
  if (matrix_ != nullptr) {
    for (int i = 0; i < height_; i++) {
      for (int j = 0; j < width_; j++) {
        delete &matrix_[i][j];
      }
    }
    delete matrix_;
  }
  if (unit_ != nullptr) {
    delete unit_;
  }
  height_ = other.height_;
  width_ = other.width_;
  matrix_ = new std::vector<std::vector<Cell>>;
  for (int i = 0; i < height_; i++) {
    matrix_->emplace_back(std::vector<Cell>());
    for (int j = 0; j < width_; j++) {
      matrix_->back().emplace_back((*other.matrix_)[i][j]);
    }
  }
  return *this;
}


Field &Field::operator=(Field &&other) noexcept {
  if (this != &other) {
    for (int i = 0; i < height_; i++) {
      for (int j = 0; j < width_; j++) {
        delete &matrix_[i][j];
      }
    }
    delete matrix_;
    delete unit_;
    matrix_ = other.matrix_;
    unit_ = other.unit_;
    height_ = other.height_;
    width_ = other.width_;
    other.matrix_ = nullptr;
    other.unit_ = nullptr;
    other.height_ = 0;
    other.width_ = 0;
  }
  return *this;
}


Field::~Field()
{
  delete unit_;
  for (int i = 0; i < height_; i++) {
    for (int j = width_ - 1; j >= 0; j--) {
      delete &(*matrix_)[i][j];
    }
  }
  for (int i = 0; i < height_; i++) {
    delete &(*matrix_)[i];
  }
  delete matrix_;
//  matrix_->clear();
}


int Field::getHeight() const
{
  return height_;
}

int Field::getWidth() const
{
  return width_;
}

Unit* Field::getUnit()
{
  return unit_;
}

void Field::moveUnit(Direction dir)
{
  Position p = unit_->getPosition();
  switch(int(dir)) {
  case 0:
    p.y += 1;
    if (p.y >= height_) p.y -= height_;
    break;
  case 1:
    p.y -= 1;
    if (p.y < 0) p.y += height_;
    break;
  case 2:
    p.x -= 1;
    if (p.x < 0) p.x += width_;
    break;
  case 3:
    p.x += 1;
    if (p.x >= width_) p.x -= width_;
    break;
  }
  if ((*matrix_)[p.y][p.x].getPatency()) {
    unit_->move(dir);
    int unitsY = unit_->getPosition().y;
    int unitsX = unit_->getPosition().x;
    if (unitsX >= width_) {
      unit_->setPosition(unitsX - width_, unitsY);
    }
    if (unitsX < 0) {
      unit_->setPosition(unitsX + width_, unitsY);
    }
    if (unitsY >= height_) {
      unit_->setPosition(unitsX, unitsY - height_);
    }
    if (unitsY < 0) {
      unit_->setPosition(unitsX, unitsY + height_);
    }
    (*matrix_)[unit_->getPosition().y][unit_->getPosition().x].reaction(this);
    std::string ev = "event on cell (";
    ev.append(std::to_string(unit_->getPosition().y));
    ev.append(", ");
    ev.append(std::to_string((unit_->getPosition().x)));
    ev.append(")\n");
    this->notify(new EventMessage(ev));
    if (unit_->checkDeath()) {
      unit_->death();
      this->notify(new GameMessage("game over: loss\n"));
    }/*
    if (unit_->getMoney() == 1000000) {
      this->notify(new GameMessage("game over: win\n"));
    }*/
//  std::cout << "reaction x: " << unit_->getPosition().x << ", reaction y: " << unit_->getPosition().y << std::endl;
  } else {
    this->notify(new ErrorMessage("attempt to enter an impassable cell\n"));
  }
}

Cell * Field::getCell(int i, int j) const
{
  return &(*matrix_)[i][j];
}

void Field::addObserver(IObserver *o)
{
  obs = o;
}

void Field::notify(Message * message)
{
  obs->update(message);
}




