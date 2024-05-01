#ifndef IRandom_HPP
#define IRandom_HPP
#include <iostream>
#include <random>
#include <string>
using namespace std;
namespace GrumpyTools
{
  namespace Core
  {
      class IRandom
      {
        // Lowercase letters
        public: static constexpr char Lowercase_Letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        // Uppercase letters
        public: static constexpr char Uppercase_Letters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        // Numbers
        public: static constexpr char Numbers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
        // Special characters
        public: static constexpr char Special_Characters[] = {'!', '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[', '\\', ']', '^', '_', '`', '{', '|', '}', '~'};
        public: static string& Password(int length);
        public: static string& Text(int length);
        public: static int RandomInt(int min_num, int max_num);
      };
  }
}
#endif // MYCLASS_H
