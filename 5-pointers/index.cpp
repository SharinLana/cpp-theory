#include <iostream>

int main()
{
  // ! Declaring and using Pointers
  int *p_number{};               // stores only an address of a variable of type int
  double *p_fractional_number{}; // stores only an address of a variable of type double

  // ! Explicitely initialize to nullptr (position of the * does not matter)
  int *p_number1{nullptr};
  int *p_fractional_number1{nullptr};

  // ! All pointer variables have the same size
  std::cout << "Size of number pointer: " << sizeof(p_number) << std::endl;                         // 8
  std::cout << "Size of fractional_number pointer: " << sizeof(p_fractional_number) << std::endl;   // 8
  std::cout << "Size of number1 pointer: " << sizeof(p_number1) << std::endl;                       // 8
  std::cout << "Size of fractional_number1 pointer: " << sizeof(p_fractional_number1) << std::endl; // 8

  // ! Pointers to different variables are of the same size
  std::cout << "sizeof(int): " << sizeof(int) << std::endl;                                   // 4
  std::cout << "sizeof(double): " << sizeof(double) << std::endl;                             // 8
  std::cout << "sizeof(int*): " << sizeof(int *) << std::endl;                                // 8
  std::cout << "sizeof(double*): " << sizeof(double *) << std::endl;                          // 8
  std::cout << "sizeof(p_number1): " << sizeof(p_number1) << std::endl;                       // 8
  std::cout << "sizeof(p_fractional_number1): " << sizeof(p_fractional_number1) << std::endl; // 8

  // ! Initializing pointers and assigning them data
  int int_var{43};
  int *p_int{&int_var}; // now the pointer p_int stores the address of the variable int_var

  std::cout << "Int_var: " << int_var << std::endl; // 43
  std::cout << "&int_var: " << &int_var << std::endl; // 0x16fd77074 (same as p_int - address)
  std::cout << "*p_int: " << *p_int << std::endl;     // 43 (the int_var value)
  std::cout << "p_int (address of the int_var in memory): " << p_int << std::endl; // the int_var address 0x16fd77074

  // ! You can  also change the address stored in a pointer at any time
  int int_var2{154};
  p_int = &int_var2; // assigned a different address to the pointer

  std::cout << "p_int: " << p_int << std::endl; // 0x16fd77070

  // ! Pointer stores only the type for which it was declared
  int *p_int2{nullptr};
  double double_var{33.12};
  int int_var3{17};

  // p_int2 = &double_var; // ! compile error
  p_int2 = &int_var3; // assigned to the same type as itself, no errors

  // ! BAD PRACTICE
  std::cout << "BAD PRACTICE! " << std::endl;
  // ! Writing into an uninitialized pointer through dereference
  int *p_number2; // Contains junk address: could be anything!
  *p_number2 = 55; // Writing into junk address

  std::cout<<std::endl;
  std::cout << "Writing into an uninitialized pointer " <<  std::endl;
  std::cout << "p_number2: " << p_number2 << std::endl;   // ! junk address: 0x16bce7140
  std::cout << "*p_number2: " << *p_number2 << std::endl; // value 55
  std::cout << std::endl;

  // ! Writing into a pointer pointing nowhere
  int *p_number3{}; // or int * p_number3 {nullptr}
  // *p_number3 = 33; // CRASH!

  std::cout << "Reading and writing through nullptr  " << std::endl;
  // std::cout << "p_number3: " << p_number3 << std::endl;
  // std::cout << "*p_number3: " << *p_number3 << std::endl; // CRASH

  return 0;
}