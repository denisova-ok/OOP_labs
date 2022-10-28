#include "Logger.hpp"
#include <fstream>
#ifndef OOP_LAB1_VERSION2_FILELOGGER_HPP
#define OOP_LAB1_VERSION2_FILELOGGER_HPP

class FileLogger: public Logger {
public:
  FileLogger(std::string filename);
  void print(std::string message) override;
  ~FileLogger() override;
private:
  std::string filename_;
  std::ofstream file;
};

#endif //OOP_LAB1_VERSION2_FILELOGGER_HPP
