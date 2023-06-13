// ! Precedence: which operation to do first
// ! Associativity: which direction or which order

#include <iostream>

int main()
{
  int a{1};
  int b{2};
  int c{3};
  int d{20};
  int e{5};
  int f{6};
  int g{7};

  int result = a + b * c - d / e - f + g; // 1 + 6 - 4 - 6 + 7 = 4
  std::cout<< "result: "<< result << std::endl;

  result = (a + b) * (c - d) / (e - f) + g; // 3 * (-17) / (-1) + 7 = 58
  std::cout << "result: " << result << std::endl;

  return 0;
}