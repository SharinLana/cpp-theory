#include <iostream>

int main()
{
  // ! Declaration and usage

  int int_value{45};
  double double_value{13.56};

  // Ways to assign a value to a reference
  // ! References MUST be initialized at declaration
  int &ref_to_int_value1{int_value};
  int &ref_to_int_value2 = int_value;
  double &ref_to_double_value{double_value};

  std::cout << "Declaring and using references (aliases)" << std::endl;

  std::cout << "int_value: " << int_value << std::endl;       // 45
  std::cout << "double_value: " << double_value << std::endl; // 13.56
  std::cout << std::endl;
  std::cout << "ref_to_int_value1: " << ref_to_int_value1 << std::endl;     // 45
  std::cout << "ref_to_int_value2: " << ref_to_int_value2 << std::endl;     // 45
  std::cout << "ref_to_double_value: " << ref_to_double_value << std::endl; // 13.56
  std::cout << std::endl;
  std::cout << "&int_value: " << &int_value << std::endl;                 // 0x16bcf7074
  std::cout << "&double_value: " << &double_value << std::endl;           // 0x16bcf7068
  std::cout << "&ref_to_int_value1: " << &ref_to_int_value1 << std::endl; // 0x16bcf7074
  std::cout << "&ref_to_int_value2: " << &ref_to_int_value2 << std::endl; // 0x16bcf7074
  std::cout << std::endl;
  std::cout << "sizeof(int): " << sizeof(int) << std::endl;                             // 4
  std::cout << "sizeof(int&): " << sizeof(int &) << std::endl;                          // 4
  std::cout << "sizeof(ref_to_int_value1): " << sizeof(ref_to_int_value1) << std::endl; // 4
  std::cout << std::endl;

  // ! Modifying data through references
  ref_to_int_value1 = 55;

  std::cout << "After modifying the value through a reference" << std::endl;
  std::cout << "int_value: " << int_value << std::endl;                 // 55
  std::cout << "ref_to_int_value1: " << ref_to_int_value1 << std::endl; // 55
  std::cout << "ref_to_int_value2: " << ref_to_int_value2 << std::endl; // 55

  return 0;
}