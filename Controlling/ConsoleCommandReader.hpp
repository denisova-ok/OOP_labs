#include "CommandReader.hpp"
#include "Multipult.hpp"
#ifndef OOP_LAB1_VERSION2_CONSOLECOMMANDREADER_HPP
#define OOP_LAB1_VERSION2_CONSOLECOMMANDREADER_HPP

class ConsoleCommandReader: public CommandReader {
public:
  ConsoleCommandReader(Multipult * mp);
  void read() override;
private:
  Multipult * pult_;
};

#endif //OOP_LAB1_VERSION2_CONSOLECOMMANDREADER_HPP
