#ifndef OOP_LAB1_VERSION2_WOLFBUILDER_HPP
#define OOP_LAB1_VERSION2_WOLFBUILDER_HPP
#include "enemyEventBuilder.hpp"

class wolfBuilder: public enemyEventBuilder {
public:
  wolfBuilder();
  void changeHealth() override;
  void changePower() override;
  void changeMoney() override;
  enemyEvent * getUnitEvent() override;
  ~wolfBuilder() override;
private:
  enemyEvent * ue;
};

#endif //OOP_LAB1_VERSION2_WOLFBUILDER_HPP
