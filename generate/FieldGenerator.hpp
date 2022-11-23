#include "../Components/Field.hpp"
#ifndef OOP_LAB1_VERSION2_FIELDGENERATOR_HPP
#define OOP_LAB1_VERSION2_FIELDGENERATOR_HPP

template<typename ... Rules>
class FieldGenerator {
public:
  Field * generate();
protected:
  template<typename Rule>
  void add(Field * field);
};

template<typename... Rules>
Field *FieldGenerator<Rules...>::generate()
{
  Field * new_field = new Field();
  (add<Rules>(new_field), ...);
  return new_field;
}

template<typename... Rules>
template<typename Rule>
void FieldGenerator<Rules...>::add(Field *field)
{
  Rule rule;
  rule.fill(field);
}


#endif //OOP_LAB1_VERSION2_FIELDGENERATOR_HPP
