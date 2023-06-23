#include <iostream>
#include <cmath>

int main()
{
  const int Pen{10};
  const int Marker{20};
  const int Eraser{30};

  int tool{Eraser};

  int number1{55};
  int number2{66};

  bool result = number1 < number2;
  std::cout << std::boolalpha << "result is " << result << std::endl; // result is true

  std::cout << std::endl;
  std::cout << "Free Standing IF Statement" << std::endl;

  if (result)
  {
    std::cout << number1 << " is less than " << number2 << std::endl; // 55 is less than 66
  }

  if (!result)
  {
    std::cout << number1 << " is less than " << number2 << std::endl;
  }

  std::cout << std::endl;
  std::cout << "IF-ELSE Statement" << std::endl;

  if (result)
  {
    std::cout << number1 << " is less than " << number2 << std::endl; // 55 is less than 66
  }
  else
  {
    std::cout << number1 << " is less than " << number2 << std::endl;
  };

  std::cout << std::endl;
  std::cout << "ELSE IF Statement" << std::endl;

  if (tool == Pen)
  {
    std::cout << "Active tool is Pen" << std::endl;
  }
  else if (tool == Marker)
  {
    std::cout << "Active tool is Marker" << std::endl;
  }
  else if (tool == Eraser)
  {
    std::cout << "Active tool is Eraser" << std::endl; // Active tool is Eraser
  }

  return 0;
}