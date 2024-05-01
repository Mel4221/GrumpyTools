#ifndef Get_HPP
#define Get_HPP
#include <string>
using namespace std;
namespace GrumpyTools
{
    namespace Core
    {
          class Get
          {
              public: static string Input();
              public: static string FormatFileSize(size_t);
              public: static int StatusNumber(size_t,size_t);
              public: static string Status(size_t,size_t);
              public: static void Wait();
              public: static bool FileExist(const string&);
          };
    }
}
#endif // MYCLASS_H
