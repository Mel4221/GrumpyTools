#include "../../include/Core/IRandom.hpp"
#include <iostream>
#include <random>
#include <string>
using namespace std;


string& GrumpyTools::Core::IRandom::Password(int length)
{
  string text = "";
  for(int ch = 0; ch < length; ch++)
  {
      switch (RandomInt(0,3))
      {
        case 0:
            text += Lowercase_Letters[RandomInt(0,25)];
        break;
        case 1:
             text += Uppercase_Letters[RandomInt(0,25)];
        break;
        case 2:
             text += Numbers[RandomInt(0,9)];
        break;
        case 3:
             text += Special_Characters[RandomInt(0,31)];
        break;
      }
  }
  static string text_ref = text;
  return text_ref;
}

string& GrumpyTools::Core::IRandom::Text(int length)
{
    string text = "";
    for(int ch = 0; ch < length; ch++)
    {
        switch (RandomInt(0,2))
        {
          case 0:
              text += Lowercase_Letters[RandomInt(0,25)];
          break;
          case 1:
               text += Uppercase_Letters[RandomInt(0,25)];
          break;
          case 2:
               text += Numbers[RandomInt(0,9)];
          break;
        }
    }
    static string text_ref = text;
    return text_ref;
}

int GrumpyTools::Core::IRandom::RandomInt(int min_num, int max_num)
{
    // Initialize random number generator
    std::random_device rd;
    std::mt19937 gen(rd());

    // Define distribution
    std::uniform_int_distribution<int> dist(min_num, max_num);

    // Generate random number
    return dist(gen);
}
