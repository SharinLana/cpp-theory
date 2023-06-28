/*
   Type       Bytes       Precision (number of digits after .)
* float         4             7
* double        8             15
* long double   12            >= double
*/

#include <iostream>
#include <iomanip>

int main()
{
  // Declare and initialize the variables
  float num1{1.01234567890f}; // f at the end is required and stands for "float"
  double num2{1.0123456789012345678};
  long double num3{1.0123456789012345678L}; // L is required

  // Print out the sizes
  std::cout << "Sizeof float: " << sizeof(num1) << std::endl;       // 4
  std::cout << "Sizeof double: " << sizeof(num2) << std::endl;      // 8
  std::cout << "Sizeof long double: " << sizeof(num3) << std::endl; // 8

  // Precision
  std::cout << std::setprecision(20);
  std::cout << "Num1 is: " << num1 << std::endl; // 8 precise digits after . All other numbers in a row are just a garbage
  std::cout << "Num2 is: " << num2 << std::endl; // 15 precise digits
  std::cout << "Num3 is: " << num3 << std::endl; // 15 precise digits

  // Scientific notation (for really huge numbers). The previous examples are called fixed notation
  double num4{134566788};
  double num5{1.34566788e8}; // number 1.34566788 was multiplied by 10(^8)
  double num6{1.345e8};      // number 1.345 was multiplied by 10(^8)
  double num7{0.00000000003498};
  double num8{3.498e-11};

  std::cout << "num4 is " << num4 << std::endl; // 134566788
  std::cout << "num5 is " << num5 << std::endl; // 134566788
  std::cout << "num6 is " << num6 << std::endl; // 134500000
  std::cout << "num7 is " << num7 << std::endl; // 3.4979999999999998372e-11
  std::cout << "num8 is " << num8 << std::endl; // 3.4979999999999998372e-11

  // Infinity and NaN
  std::cout << std::endl;
  std::cout << "Infinity and NaN" << std::endl;

  double num9{5.6};
  double num10{}; // initialized to 0
  double num11{}; // initialized to 0

  // Infinity
  double result{num9 / num10};

  std::cout << num9 << "/" << num10 << " yields " << result << std::endl; // inf
  std::cout << result << "+" << num10 << " yields " << result + num10 << std::endl; // inf

  // NaN
  result = num10 / num11;

  std::cout << num10 << "/" << num11 << " = " << result << std::endl; // nan

  return 0;
}