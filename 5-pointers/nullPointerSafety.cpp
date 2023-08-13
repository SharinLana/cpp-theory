#include <iostream>

int main()
{
  // ! Make sure you are working with pointers containing a valid address
  int *p_number{new int{17}};

  delete p_number;
  p_number = nullptr;

  // Compact nullptr check
  if (p_number)
  {
    std::cout << "p_number points to a VALID address" << std::endl;
  }
  else
  {
    std::cout << "p_number points to an INVALID address" << std::endl;
  }
  return 0;
}