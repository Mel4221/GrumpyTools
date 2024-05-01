#include "../../include/Core/Get.hpp"  // Include the corresponding header file#include <iostream>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <filesystem>
/// includes provided by chatgpt
#ifdef _WIN32
#include <io.h> // For access() on Windows
#else
#include <unistd.h> // For access() on Unix-like systems
#endif

using namespace std;

string GrumpyTools::Core::Get::Input()
{
    cout << "> ";
    string input;
    getline(cin,input);
    return input;
}
/// this code was literally taken from chat gpt as it is
/// it literally just takes the file size and returns an string value
/// from it's current length |provided by chatgpt
string GrumpyTools::Core::Get::FormatFileSize(size_t length)
{
const char* suffixes[] = {"bytes", "KB", "MB", "GB", "TB", "PB", "EB"}; // Units for file size
const int numSuffixes = sizeof(suffixes) / sizeof(suffixes[0]);

int suffixIndex = 0;
double fileSize = static_cast<double>(length);
while (fileSize >= 1024 && suffixIndex < numSuffixes - 1) {
    fileSize /= 1024;
    ++suffixIndex;
}

// Round fileSize to 2 decimal places
fileSize = round(fileSize * 100) / 100;

// Construct the formatted string
return to_string(fileSize) + " " + suffixes[suffixIndex];
}

/// Gets the current status of from the current
/// operation and find the porcentage
/// of the current status of the operation
int GrumpyTools::Core::Get::StatusNumber(size_t current,size_t goal)
{
  //cout << "Current: "+to_string(current)+" Goal: "+to_string(goal) + " Calculation: "+to_string(current*100/goal)<<endl;
  //getline(cin,status);
  goal  = goal -1;
  return round(((current * 100) / goal))* 1.0 ;
}

/// Gets the current status of from the current
/// operation and find the porcentage
/// of the current status of the operation
string GrumpyTools::Core::Get::Status(size_t current,size_t goal)
{
  return to_string(StatusNumber(current,goal))+"%";;
}
void GrumpyTools::Core::Get::Wait()
{
    cout << "Press enter to continue";
    string input;
    getline(cin,input);
}
/// Returns if a file exist or not by using a fast method listed
/// on Stack Overflow
/// https://stackoverflow.com/questions/12774207/fastest-way-to-check-if-a-file-exists-using-standard-c-c11-14-17-c
bool GrumpyTools::Core::Get::FileExist(const string& name)
{
    if (FILE *file = fopen(name.c_str(), "r"))
    {
        fclose(file);
        return true;
    } else
    {
        return false;
    }
}
