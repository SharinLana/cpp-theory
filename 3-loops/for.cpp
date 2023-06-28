#include <iostream>

int main()
{
  // Declaring the variable inside of the loop:
  for (unsigned int i{}; i < 10; i++)
  {
    std::cout << " I like C++ " << std::endl; // printed the line 10 times
  }

  // Declaring the variable outside of the loop:
  // (the size_t - a type that may express the size of any object in bytes
  // and it's commonly used for array indexing and loop counting)
  size_t j{1};
  const size_t count{11};

  for (; j < count; j++)
  {
    std::cout << j << ". Using j variable declared outside of the loop " << std::endl; //  printed the line 10 times
  }
  return 0;
}