#include <iostream>

int main()
{
  // ! Logical Operators (&&, ||, !)

  bool a{true};
  bool b{false};
  bool c{true};

  std::cout << std::boolalpha;
  std::cout << "a :" << a << std::endl;
  std::cout << "b :" << b << std::endl;
  std::cout << "c :" << c << std::endl;

  std::cout << std::endl;
  std::cout << "======= Basic AND operations =======" << std::endl;

  std::cout << "a && b :" << (a && b) << std::endl;           // false
  std::cout << "a && c :" << (a && c) << std::endl;           // true
  std::cout << "a && b && c :" << (a && b && c) << std::endl; // false

  std::cout << std::endl;
  std::cout << "======= Basic OR operations =======" << std::endl;

  std::cout << "a || b :" << (a || b) << std::endl;           // true
  std::cout << "a || c :" << (a || c) << std::endl;           // true
  std::cout << "a || b || c :" << (a || b || c) << std::endl; // true

  std::cout << std::endl;
  std::cout << "======= Basic NOT operations =======" << std::endl;

  std::cout << "!a :" << !a << std::endl; // false
  std::cout << "!b :" << !b << std::endl; // true
  std::cout << "!c :" << !c << std::endl; // false

  std::cout << std::endl;
  std::cout << "======= Combination of the logical operators =======" << std::endl;

  std::cout << "!(a && b) || c : " << (!(a && b) || c) << std::endl; // true

  return 0;
}