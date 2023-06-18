#include <iostream>
#include <limits>

int main()
{
  std::cout << "The range for short is from " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << std::endl; // -32768 to 32767
  std::cout << "The range for unsigned short is from " << std::numeric_limits<unsigned short>::min() << " to " << std::numeric_limits<unsigned short>::max() << std::endl; // 0 to 65535
  std::cout << "The range for integer is from " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl; // -2147483648 to 2147483647
  std::cout << "The range for unsigned int is from " << std::numeric_limits<unsigned int>::min() << " to " << std::numeric_limits<unsigned int>::max() << std::endl; // 0 to 4294967295
  std::cout << "The range for long is from " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << std::endl; // -9223372036854775808 to 9223372036854775807
  std::cout << "The range for float is from " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << std::endl; // 1.17549e-38 to 3.40282e+38
  std::cout << "The range (with lowest) for float is from " << std::numeric_limits<float>::lowest() << " to " << std::numeric_limits<float>::max() << std::endl; // -3.40282e+38 to 3.40282e+38
  std::cout << "The range (with lowest) for double is from " << std::numeric_limits<double>::lowest() << " to " << std::numeric_limits<double>::max() << std::endl; // -1.79769e+308 to 1.79769e+308
  std::cout << "The range (with lowest) for long double is from " << std::numeric_limits<long double>::lowest() << " to " << std::numeric_limits<long double>::max() << std::endl; // 
  return 0;
}