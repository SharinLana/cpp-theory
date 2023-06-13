#include <iostream>

int addNumbers(int firstNum, int secNum)
{
  int sum = firstNum + secNum;
  return sum;
}

int main()
{
  int sum;
  int first{14};
  int second{9};

  sum = addNumbers(8, 10);

  std::cout << "First result: "<< sum << std::endl;
  std::cout<< "Second result: "<< addNumbers(23, 7) << std::endl;
  std::cout<< "Third result: "<<addNumbers(first, second) << std::endl;
  return 0;
}