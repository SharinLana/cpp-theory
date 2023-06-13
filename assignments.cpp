#include <iostream>

int main()
{
  int var1{123}; // Declare and Initialize
  std::cout << "var1: " << var1 << std::endl;

  var1 = 55; // Assign
  std::cout << "var1: " << var1 << std::endl;

  std::cout << "---------------------" << std::endl;

  bool state{false};
  std::cout << std::boolalpha;
  std::cout << "state: " << state << std::endl;

  state = true;
  std::cout << "state: " << state << std::endl;

  // ! Careful with the "auto" type
  auto var2{333u}; // Declare and Initialize as unsigned variable
  var2 = -55;      // Assign

  std::cout << "var2: " << var2 << std::endl; // ! 4294967241
  // ! will be an error as we cannot assign negative number 
  // ! to the unsigned type of a variable

  return 0;
}