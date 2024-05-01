#ifndef RW_HPP
#define RW_HPP
#include "FileInfo.hpp"
#include <string>
namespace GrumpyTools
{
  namespace IO
  {
    class Reader
    {
        public: static FileInfo* ReadFile(string);
    };
  }
}
#endif // MYCLASS_H
