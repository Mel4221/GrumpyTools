#ifndef Key_HPP
#define Key_HPP
#include <string>
using namespace std;
namespace GrumpyTools
{
    namespace Data
    {
        class Key
        {
            public: string Name = "";
            public: string Value = "";
            public: char AssingChar = '=';
            public: char TerminatorChar = ';';
            public: void Clear()
            {
                Name = "";
                Value = "";
            }
            public: string ToString()
            {
                return Name + AssingChar + Value + TerminatorChar+"\n";
            }
            public: string ToString(string format)
            {
                if(format == "html")
                {
                    return "<KEY>"+Name+"</KEY>"+"<VALUE>"+Value+"</VALUE>\n";
                }
                else{
                    return ToString();
                }
            }
            public: bool IsEmpty()
            {
                if(Name == "")
                {
                    return true;
                }else{
                    return false;
                }
            }
            public: Key()
            {

            }
        };
    }
}
#endif // MYCLASS_H
