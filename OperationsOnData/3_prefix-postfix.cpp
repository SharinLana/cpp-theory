#include <iostream>

int main()
{
  // ! Postfix
  std::cout << "========== POSTFIX ============" << std::endl;
  std::cout << std::endl;

  int value{5};
  std::cout << value++ << std::endl; // 5
  std::cout << value << std::endl;   // 6

  std::cout << value-- << std::endl; // 6
  std::cout << value-- << std::endl; // 5

  std::cout << std::endl;

  // ! Prefix
  std::cout << "========== PREFIX ============" << std::endl;
  std::cout << std::endl;

  value = 6;

  std::cout << ++value << std::endl; // 7

  std::cout << --value << std::endl; // 6

  return 0;
}