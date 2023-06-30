#include <iostream>

int main()
{
  const size_t COUNT{10};
  size_t i{0};
  unsigned int j{0};

  while (i < COUNT)
  {
    ++j;
    std::cout << j << ". I love C++ " << std::endl;
    i++;
  }
  return 0;
}