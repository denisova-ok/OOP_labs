#ifndef OOP_LAB1_VERSION2_DIRECTOR_HPP
#define OOP_LAB1_VERSION2_DIRECTOR_HPP
#include "enemyEventBuilder.hpp"

class Director {
public:
  Director(enemyEventBuilder * b);
  void setBuilder(enemyEventBuilder * b);
  enemyEvent * make();
private:
  enemyEventBuilder * builder;
};

#endif //OOP_LAB1_VERSION2_DIRECTOR_HPP
