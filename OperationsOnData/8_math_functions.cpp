// ! https://en.cppreference.com/w/cpp/header/cmath

#include <iostream>
#include <cmath>

int main()
{
  double weight{7.7};
  int number{5};
  int savings{-5000};

  // ! std::floor()
  std::cout << "======== STD::FLOOR ========= " << std::endl;

  std::cout << std::endl;
  std::cout << "Floored weight is " << std::floor(weight) << std::endl; // 7
  std::cout << std::endl;

  // ! std::ceil()
  std::cout << "======== STD::CEIL ========= " << std::endl;

  std::cout << std::endl;
  std::cout << "Ceiled weight is " << std::ceil(weight) << std::endl; // 8
  std::cout << std::endl;

  // ! std::abs()
  std::cout << "======== STD::ABS ========= " << std::endl;

  std::cout << std::endl;
  std::cout << "ABS savings is " << std::abs(savings) << std::endl; // 5000 (became positive)
  std::cout << std::endl;

  // ! std::exp() - exponential
  std::cout << "======== STD::EXP ========= " << std::endl;

  std::cout << std::endl;
  number = std::exp(10);
  std::cout << "Exponential number is " << number << std::endl; // 22026
  std::cout << std::endl;

  // ! std::log() - reverse function of pow(): if 2^3 = 8, log 8 in base 2 = 3
  // ! By default log() computes the log in base e.
  std::cout << "======== STD::LOG ========= " << std::endl;

  std::cout << std::endl;
  std::cout << "To get 8, you would elevate e to the power of  " << std::log(8) << std::endl;          // 2.07944
  std::cout << "To get 1000, you would elevate 10 to the power of  " << std::log10(1000) << std::endl; // 3
  std::cout << std::endl;

  // ! std::pow()
  std::cout << "======== STD::POW ========= " << std::endl;

  std::cout << std::endl;
  std::cout << "Powered number is " << std::pow(number, 3) << std::endl; // 1.06858e+13
  std::cout << std::endl;

  // ! std::sqrt()
  std::cout << "======== STD::SQRT ========= " << std::endl;

  std::cout << std::endl;
  std::cout << "Square root of the number is " << std::sqrt(number) << std::endl; // 148.412
  std::cout << std::endl;

  // ! std::round()
  std::cout << "======== STD::ROUND ========= " << std::endl;

  std::cout << std::endl;
  std::cout << "Rounded weight is " << std::round(weight) << std::endl; // 8
  std::cout << std::endl;

  return 0;
}