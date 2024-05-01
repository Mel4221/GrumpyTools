#include "../../include/Data/QKey.hpp"
#include "../../include/IO/FileInfo.hpp"
//#include "../IO/Reader.cpp"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
using namespace GrumpyTools::Data;
//using namespace GrumpyTools::Core;
using namespace GrumpyTools::IO;

bool QKey::ReadKeys(){return QKey::ReadKeys(QKey::FileName);}


bool QKey::ReadKeys(string fileName)
{
    bool hasKeys,isNext,isOpen;
    hasKeys = false;
    //if the file does not exist return because there
    //are no keys
    //if(!Get::FileExist(fileName))return hasKeys;
    //Reading file
    FileInfo* file = new FileInfo();//Reader::ReadFile(fileName);
    //  vector
    char * buffer = file->Buffer;


    string input,str;
    char ter,ass;
    vector<char> temp;
    str = "";

    //cout << info->Size <<endl;
    //getline(cin,input);
    ter  = QKey::TerminatorChar;
    ass = QKey::AssingChar;
    isNext = false;
    isOpen = false;
    for(size_t ch = 0; ch < file->Length; ch++)
    {
      //  QKey::CurrentTextStatus = "Reading Keys Status: "+Get::Status(ch,file->Length);
        //QKey::CurrentIntStatus = Get::StatusNumber(ch,file->Length);
        /*
          key=user;
          value=melquiceded;
          key=hack;
          value==;\n \n \n;;=;;
        */
        if(QKey::AllowDebugger)
        {
          if(str != QKey::CurrentTextStatus)
          {
              str = QKey::CurrentTextStatus;
              //why it does not work the other way around it
              //like by just passing str to it , i don't know why it
              //just does not work but it will stay like that for  a minute
              //Write(""+str);
          }
            //cout << to_string(ch) << endl;
        }
        if(file->Buffer[ch] == ass && !isOpen)
        {
          //key += file->Buffer[ch];
          /*
          key = temp.ToString();
          temp.Clear();
          isOpen = true;
          current = IRandom.Pin();
          */
        }

    }
    //cout << buffer;
    delete[]buffer;
    delete[]file;
    return hasKeys;
}

bool QKey::Exist(string& key)
{
     for(size_t k = 0; k < QKey::Keys->size(); k++)
    {
        if(AllowDebugger)
        {
          //  cout << (*Keys)[k]->ToString() +" "+Get::Status(k,QKey::Keys->size());
        }
        if((*Keys)[k]->Name==key)
        {
                return true;
        }
    }
    return false;
}

bool QKey::AddKey(string& key,string& value)
{
    bool added = false;

    Key* k = new Key();
    if(!AllowRepeatedKeys)
    {
        if(!Exist(key))
        {
            k->Name = key;
            k->Value = value;
            Keys->push_back(k);
            added = true;
            return added;
        }
    }
    k->Name = key;
    k->Value = value;
    Keys->push_back(k);
    added = true;

    return added;
}
