#include <iostream>

int main()
{
  // ! In some cases, the new operator can fail, so it's better to check for such errors
  // int *p_number{new int{1000000000}};

  // Checking with 'std::exception&' mechanism
  // for (size_t i{}; i < 1000000000000; ++i)
  // {
  //   try
  //   {
  //     int *p_number1{new int[10000000]};
  //   }
  //   catch (std::exception &ex)
  //   {
  //     std::cout << "Caught exception : " << ex.what() << std::endl; // Caught exception : std::bad_alloc
  //   }
  // }

  // Checking with 'std::nothrow'
  // for (size_t i{}; i < 1000000000000; ++i)
  // {
  //   int *p_number2{new(std::nothrow) int[10000000]};

  //   if (p_number2 == nullptr)
  //   {
  //     std::cout << "Memory allocation failed" << std::endl;
  //   }
  //   else
  //   {
  //     std::cout << "Memory allocation succeeded" << std::endl;
  //   }
  // }
  return 0;
}