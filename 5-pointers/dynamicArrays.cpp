#include <iostream>

int main()
{
  // ! Dynamic Arrays - arrays allocated on the heap with the new operator
  // ! Can also use the std::nothrow version of new operator

  size_t size{10};

  // Different ways you can declare an array dynamically
  double *p_salaries{new double[size]};                             // salaries will always contain garbage values
  int *p_students{new (std::nothrow) int[size]{}};                  // all values initialized to 0
  double *p_scores{new (std::nothrow) double[size]{1, 2, 3, 4, 5}}; // first 5 will be initialized as 1, 2, 3, 4, 5, and the rest as 0's

  // Nullptr check before using the dynamic array
  if (p_scores)
  {
    for (size_t i{}; i < size; ++i)
    {
      std::cout << "value : " << p_scores[i] << " : " << *(p_scores + i) << std::endl;
    }
  }

  // ! Releasing memory
  delete[] p_scores;
  p_scores = nullptr;

  delete[] p_students;
  p_students = nullptr;

  delete[] p_salaries;
  p_salaries = nullptr;

  // ! Dynamic arrays are different from regular arrays:
  // ! std::size doesn't work for them, and they don't support range based for loops

  double *temps = new double[size]{12, 34, 56, 78, 100, 32, 10, 19, 43, 65};

  // std::cout << "std::size (temps) : " << std::size(temps) << std::endl;  // Compiler error

  // for (double temp: temps)
  // {
  //   std::cout << "temperature: " << temp<< std::endl; // Compiler error
  // }

  return 0;
}