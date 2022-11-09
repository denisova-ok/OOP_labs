#include "Multipult.hpp"
#include <set>
#include <vector>
#ifndef OOP_LAB1_VERSION2_MANAGER_HPP
#define OOP_LAB1_VERSION2_MANAGER_HPP

class Manager {
public:
  Manager(Multipult * mp);
  void manage();
private:
  Multipult * mp_;
  std::set<char> keys;
  std::vector<char> commands;
};

#endif //OOP_LAB1_VERSION2_MANAGER_HPP
