#include <iostream>

int main()
{
  // ! Comparing stuff

  int num1{45};
  int num2{60};

  std::cout << "number 1:" << num1 << std::endl;
  std::cout << "number 2:" << num2 << std::endl;

  std::cout << std::endl;
  std::cout << "========= Comparing Variables ==========" << std::endl;

  std::cout << std::boolalpha; // Make bool show up as true/false instead of 0/1

  std::cout << "number 1 < number2:" << (num1 < num2) << std::endl; // true
  std::cout << "number 1 > number2:" << (num1 > num2) << std::endl; // false
  std::cout << "number 1 <= number2:" << (num1 <= num2) << std::endl; // true
  std::cout << "number 1 >= number2:" << (num1 >= num2) << std::endl; // false
  std::cout << "number 1 == number2:" << (num1 == num2) << std::endl; //false
  std::cout << "number 1 != number2:" << (num1 != num2) << std::endl; // true

  return 0;
}