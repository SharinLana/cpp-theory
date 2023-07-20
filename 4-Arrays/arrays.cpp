#include <iostream>

int main()
{
  // Writing data with a loop
  int scores[10]; // an array storing 10 integers

  std::cout << std::endl;
  std::cout << "Writing data in array with a loop" << std::endl;

  for (size_t i{0}; i < 10; i++)
  {
    scores[i] = i + 1;
  }
  // Read data out
  for (size_t i{0}; i < 10; i++)
  {
    std::cout << "Scores [" << i << "] " << scores[i] << std::endl;
  }
  
  return 0;
}