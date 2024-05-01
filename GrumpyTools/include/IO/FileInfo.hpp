#ifndef FileInfo_HPP
#define FileInfo_HPP
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;
namespace GrumpyTools
{
  namespace IO
  {

        class FileInfo
      {
          public: string Name = "";
          public: string Type = "";
          public: char*  Buffer = nullptr;
          public: size_t Length = 0;
          public: string Size = "0B";
          public: time_t CreationTime;
          public: time_t LastModifiedTime;
          public: time_t LastAccessTime;
          public: bool IsReadable;
          public: bool IsWritable;
          public: bool IsExecutable;
          ~FileInfo()
          {
            delete[] Buffer;
          }
          public: string ToString()
          {
            return "FILE: "+Name+" LENGTH: "+to_string(Length)+" SIZE: "+Size;
          }
      };
  }
}
#endif // MYCLASS_H

/*
#include <iostream>
#include <fstream>
#include <string>

#ifdef _WIN32
#include <io.h> // For access() on Windows
#else
#include <unistd.h> // For access() on Unix-like systems
#endif

using namespace std;

class FileProperties {
public:
    string fileName;
    bool IsReadable;
    bool IsWritable;
    bool IsExecutable;

    FileProperties(const string& filename) : fileName(filename) {
        setPermissions(filename);
    }

private:
    void setPermissions(const string& filename) {
        IsReadable = checkFilePermission(filename, R_OK);
        IsWritable = checkFilePermission(filename, W_OK);
        IsExecutable = checkFilePermission(filename, X_OK);
    }

    bool checkFilePermission(const string& filename, int mode) {
#ifdef _WIN32
        return _access(filename.c_str(), mode) == 0;
#else
        return access(filename.c_str(), mode) == 0;
#endif
    }
};

int main() {
    // Example usage
    string filename = "example.txt";
    FileProperties properties(filename);

    cout << "File: " << properties.fileName << endl;
    cout << "Readable: " << (properties.IsReadable ? "Yes" : "No") << endl;
    cout << "Writable: " << (properties.IsWritable ? "Yes" : "No") << endl;
    cout << "Executable: " << (properties.IsExecutable ? "Yes" : "No") << endl;

    return 0;
}

*/
