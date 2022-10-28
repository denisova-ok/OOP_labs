#ifndef OOP_LAB1_VERSION2_THIEFBUILDER_HPP
#define OOP_LAB1_VERSION2_THIEFBUILDER_HPP
#include "enemyEventBuilder.hpp"

class thiefBuilder: public enemyEventBuilder {
public:
  thiefBuilder();
  void changeHealth() override;
  void changePower() override;
  void changeMoney() override;
  enemyEvent * getUnitEvent() override;
  ~thiefBuilder() override;
private:
  enemyEvent * ue;
};

#endif //OOP_LAB1_VERSION2_THIEFBUILDER_HPP
