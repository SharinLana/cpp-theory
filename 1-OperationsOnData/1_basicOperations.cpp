#include <iostream>

int main()
{
  // ! Addition
  int number1{10};
  int number2{21};

  int firstSum{number1 + number2}; // 31
  int secondSum = number1 + number2 + number1; // 41

  std::cout << "First sum is: " << firstSum << std::endl;
  std::cout << "Second sum is: " << secondSum << std::endl;

  std::cout << "---------------------" << std::endl;
  std::cout << std::endl;

  // ! Subtraction
  int diff1{number2 - number1}; // 11
  int diff2 = number1 - number2 - number1; // -21

  std::cout << "diff1 is: " << diff1 << std::endl;
  std::cout << "diff2 is: " << diff2 << std::endl;

  std::cout << "---------------------" << std::endl;
  std::cout << std::endl;

  // ! Multiplication
  int product1{number2 * number1}; // 210
  int product2 = number1 * number2 * number1; // 2100

  std::cout << "product 1 is: " << product1 << std::endl;
  std::cout << "product 2 is: " << product2 << std::endl;

  std::cout << "---------------------" << std::endl;
  std::cout << std::endl;

  // ! Division (the result will be an integer, not a fractional number)
  // quotinent = chastnoe (Russian)

  int quotinent1{number2 / number1}; // 2
  int quotinent2 = number1 / 17; // 0

  std::cout << "The quotinent 1 is: " << quotinent1 << std::endl;
  std::cout << "The quotinent 2 is: " << quotinent2 << std::endl;

  std::cout << "---------------------" << std::endl;
  std::cout << std::endl;

  // ! Modulus
  int modulus{number2 % number1}; // 1

  std::cout << "The modulus is: " << modulus << std::endl;

  std::cout << "---------------------" << std::endl;
  std::cout << std::endl;

  return 0;
}