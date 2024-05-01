#ifndef QKey_HPP
#define QKey_HPP
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Key.hpp"
using namespace std;
namespace GrumpyTools
{
    namespace Data
    {
        //QuickTools::Data::QKey::Keys
        class QKey:Key
        {

            public: string FileName = "QKeyFile.qkey";
            public: char AssingChar = '=';
            public: char TerminatorChar = ';';
            public: int Version = 1000;
            public: vector<Key*>* Keys;
            public: bool AllowRepeatedKeys = false;
            public: bool AllowDebugger = false;
            public: string CurrentTextStatus = "not-started";
            public: int CurrentIntStatus = 0;
            public: bool Exist(string&);
            public: int GetKeysVersion();
            public: bool MatchVersion();
            public: bool ReadKeys();
            public: bool ReadKeys(string);
            public: bool WriteKeys();
            public: bool AddKey(string&,string&);
            public: bool RemoveKey(string&);
            public: bool RemoveKey(int);
            public: QKey()
            {
                Keys = new vector<Key*>();
            }
            public: ~QKey()
            {
              free(QKey::Keys);
            }
        };
    }
}
#endif // MYCLASS_H
