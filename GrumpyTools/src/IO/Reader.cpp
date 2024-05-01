#include "../../include/IO/Reader.hpp"
#include "../../include/IO/FileInfo.hpp"
//#include "../Core/Get.cpp"
#include <iostream>
#include <fstream>
#include <string>
#include <sys/stat.h>
#include <ctime>


using namespace std;
//using namespace GrumpyTools::Core;
///
/// Reads the file and return a pointer to the given file array buffer
/// more info https://cplusplus.com/reference/istream/istream/read/
GrumpyTools::IO::FileInfo* GrumpyTools::IO::Reader::ReadFile(string fileName)
{
    string f ;
    ifstream is(fileName,ifstream::binary);
    if(!is){return nullptr;}
    FileInfo* file = new FileInfo();

    // get length of file:
    is.seekg (0, is.end);
    size_t length = is.tellg();
    is.seekg (0, is.beg);
    char * buffer = new char[length];
    is.read(buffer,length);


    file->Name = fileName;
    file->Size = "not-ready";//Get::FormatFileSize(length);
    file->Buffer = buffer;
    file->Length = length;
    size_t dotIndex = fileName.find_last_of(".");
    // getting the file type
    if (dotIndex != string::npos && dotIndex < fileName.size() - 1) {
        file->Type = fileName.substr(dotIndex + 1);
     } else {
         file->Type = "Unknown";
     }
    struct stat fileStat;
    stat(fileName.c_str(), &fileStat);
    file->CreationTime = fileStat.st_ctime;

    // Get last modified time
    file->LastModifiedTime = fileStat.st_mtime;

    // Get last access time
    file->LastAccessTime = fileStat.st_atime;
    is.close();
    return file;
}
