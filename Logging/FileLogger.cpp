#include "FileLogger.hpp"

void FileLogger::print(std::string message)
{
  file << message;
}

FileLogger::FileLogger(std::string filename)
{
  filename_ = filename;
  file.open(filename_);
}

FileLogger::~FileLogger()
{
  file.close();
}
