#include <iostream>

int main()
{
  const int Pen{10};
  const int Marker{20};
  const int Eraser{30};

  int tool{Pen};

  switch (tool)
  {
  case Pen:
  {
    std::cout << "Active tool is Pen" << std::endl; // Active tool is Pen
  }
  break;
  case Marker:
  {
    std::cout << "Active tool is Marker" << std::endl;
  }
  break;
  default:
  {
    std::cout << "Doesn't match any tool" << std::endl;
  }
  }

  return 0;
}