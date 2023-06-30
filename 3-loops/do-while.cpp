#include <iostream>

int main()
{
  const int COUNT{10};
  size_t i{0};
  unsigned int j{0};

  do
  {
    ++j;
    std::cout << j << ". I love C++ " << std::endl;
    i++;
  } while (i < COUNT);

  return 0;
}