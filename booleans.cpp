#include <iostream>

int main()
{
  bool red_light{true};
  bool green_light{false};

  if (red_light == true)
  {
    std::cout << "STOP!" << std::endl;
  }
  else
  {
    std::cout << "GO!" << std::endl;
  }

  if (green_light)
  {
    std::cout << "The light is green" << std::endl;
  }
  else
  {
    std::cout << "The light is NOT green" << std::endl;
  }

  std::cout << "the size of a bool is: " << sizeof(green_light) << std::endl; // ! 1 byte

  std::cout << std::endl;
  std::cout << std::boolalpha; // ! to view the variables below as "true" or "false"

  std::cout << "Red light: " << red_light << std::endl; // Red light: true
  std::cout << "Green light: " << green_light << std::endl; // Green light: false

  return 0;
}