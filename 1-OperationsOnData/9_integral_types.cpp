// ! Integral types less than 4 bytes in size do not support arithmetic operations
// ! like addition, subtraction, multiplication, division

// ! So, by default, you can't do arithmetic operations with such values as
// ! char (1 byte) or short int (2 bytes in size)

// ! The same behavior is present on other operators
// ! like shift operators >> and <<

#include <iostream>
#include <cmath>

int main()
{
  short int var1{10}; // 2 bytes
  short int var2{20}; // 2 bytes

  char var3{40}; // 1 byte
  char var4{50}; // 1 byte

  std::cout << "size of var1 : " << sizeof(var1) << std::endl; // 2
  std::cout << "size of var2 : " << sizeof(var2) << std::endl; // 2
  std::cout << "size of var3 : " << sizeof(var3) << std::endl; // 1
  std::cout << "size of var4 : " << sizeof(var4) << std::endl; // 1

  // ! If you try to sum them up, the result will be an int,
  // ! and not a short int or a char. Compiler will implicitly convert it into an int
  // ! to be able to do the arithmetic operation

  auto result1 = var1 + var2;
  auto result2 = var3 + var4;

  std::cout << "size of result1 : " << sizeof(result1) << std::endl; // 4 bytes (int)
  std::cout << "size of result2 : " << sizeof(result2) << std::endl; // 4 bytes (int)

  return 0;
}