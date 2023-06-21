#include <iostream>

int main()
{
  // ! Compound Operators (+=. -=. *=. /=. %=)

  int value{45};
  std::cout << value << std::endl;

  value += 10;
  std::cout << "The value after += 10 is:  " << value << std::endl; // 55

  std::cout << std::endl;
  value -= 11;
  std::cout << "The value after -= 11 is:  " << value << std::endl; // 44

  std::cout << std::endl;
  value *= 10;
  std::cout << "The value after *= 10 is:  " << value << std::endl; // 440

  std::cout << std::endl;
  value /= 2;
  std::cout << "The value after /= 2 is:  " << value << std::endl; // 220

  std::cout << std::endl;
  value %= 10;
  std::cout << "The value after %= 10 is:  " << value << std::endl; // 0

  return 0;
}
