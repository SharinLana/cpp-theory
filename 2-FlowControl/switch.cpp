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
  case Marker:
  {
    std::cout << "Drawing tool" << std::endl; // Drawing tool
  }
  break;
  case Eraser:
  {
    std::cout << "Erasing tool" << std::endl;
  }
  break;
  default:
  {
    std::cout << "Doesn't match any tool" << std::endl;
  }
  break;
  }

  std::cout<< "Next line" << std::endl; // Next line

  return 0;
}