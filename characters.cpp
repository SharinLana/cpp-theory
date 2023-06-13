#include <iostream>

int main()
{
  char value = 65; // will print "A" because "A" is under the number 65 in ASCII encoding list

  char character1{'a'}; // ! for char you must use a SINGLE quote
  char character2{'b'};
  char character3{'c'};
  char character4{'d'};

  std::cout << value << std::endl; // A
  // if you need to print the char as a number:
  std::cout << "value (int)" << static_cast<int>(value) << std::endl;

  std::cout << character1 << std::endl;
  std::cout << character2 << std::endl;
  std::cout << character3 << std::endl;
  std::cout << character4 << std::endl;

  return 0;
}