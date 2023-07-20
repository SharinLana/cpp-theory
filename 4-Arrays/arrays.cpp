#include <iostream>

int main()
{
  // Writing data with a loop
  int scores[10]; // an array storing 10 integers

  std::cout << std::endl;
  std::cout << "Writing data in array with a loop" << std::endl;
  std::cout << std::endl;

  for (size_t i{0}; i < 10; i++)
  {
    scores[i] = i + 1;
  }
  // Read data out
  for (size_t i{0}; i < 10; i++)
  {
    std::cout << "Scores [" << i << "]: " << scores[i] << std::endl;
  }
  std::cout << std::endl;

  // Initialize an array at declaration
  std::cout << std::endl;
  std::cout << "Initialize an array at declaration" << std::endl;
  std::cout << std::endl;

  double salaries[5]{12.4, 15.6, 17.5, 11.6, 16.9};

  for (size_t i{0}; i < 5; i++)
  {
    std::cout << "Salary [" << i << "]: " << salaries[i] << std::endl; // with indexes
  }
  std::cout << std::endl;

  // Looping through an array with a range based for loop
  std::cout << std::endl;
  std::cout << "Looping through an array with a range based for loop" << std::endl;
  std::cout << std::endl;

  for (auto salary : salaries)
  {
    std::cout << "Salary: " << salary << std::endl; // no indexes
  }
  std::cout << std::endl;

  // Getting the size of the array
  std::cout << std::endl;
  std::cout << "Getting the size of the array" << std::endl;
  std::cout << std::endl;

  int numbers[]{1, 2, 3, 4, 5, 6, 7, 8, 9};
  int sizeOfNumbersArr{std::size(numbers)};

  std::cout << "The size of the array is : " << sizeOfNumbersArr << std::endl; // 9

  // Looping through the array using its size as an ending point
  for (size_t i{0}; i < sizeOfNumbersArr; i++)
  {
    std::cout << "The number under the index " << i << " is : " << numbers[i] << std::endl;
  }
  std::cout << std::endl;

  // Getting the size of the array, old way (prior C++17)
  // Calculate the total number of bytes in the array and divide it by the size of a single element
  std::cout << std::endl;
  std::cout << "Getting the size of the array (old way, prior C++17)" << std::endl;
  std::cout << std::endl;

  std::cout << "sizeof(numbers) is : " << sizeof(numbers) << std::endl;    // 36 bytes
  std::cout << "sizeof(numbers[0]) : " << sizeof(numbers[0]) << std::endl; // 4 bytes
  int result{sizeof(numbers) / sizeof(numbers[0])};                        // 9

  // Looping through the array using its size as an ending point
  for (size_t i{0}; i < result; i++)
  {
    std::cout << "The number under the index " << i << " is : " << numbers[i] << std::endl;
  }
  std::cout << std::endl;

  return 0;
}