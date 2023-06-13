#include <iostream>

int main()
{
  int cats(3);
  int dogs{2};
  int pets = cats + dogs;

  std::cout << "Number of cats: " << cats << std::endl;
  std::cout << "Number of dogs: " << dogs << std::endl;
  std::cout << "Number of pets: " << pets << std::endl;

  // Check the size in memory:
  std::cout << "Cats, size in memory: " << sizeof(cats) << std::endl; // 4 bites
  std::cout << "Dogs, size in memory: " << sizeof(dogs) << std::endl; // 4 bites
  std::cout << "Pets, size in memory: " << sizeof(pets) << std::endl; // 4 bites

  // ! Signed and Unsigned Integers
  signed int number1{15}; // -7 -> 0, 0 -> 8
  signed int number2{-15};

  unsigned int number3{15}; // 0, 15
  // unsigned int number4{-16}; // ! Will give an error (unsigned integer cannot be negative)

  std::cout << "Signed int number1: " << number1 << std::endl;   // 15
  std::cout << "Signed int number2: " << number2 << std::endl;   // -15
  std::cout << "Unsigned int number3: " << number3 << std::endl; // 15
  // std::cout << "Unsigned int number4: " << number4 << std::endl; // Compilation error

  // ! Short (2 bites) and Long (4 bites)

  short short_int1{-2345};            // 2 bytes
  short int short_int2(167);          // 2 bytes
  signed short short_int3{144};       // 2 bytes
  signed short int short_int4(-456);  // 2 bytes
  unsigned short int short_int5{872}; // 2 bytes;

  int var1{55};          // 4 bytes
  signed var2{-67};      // 4 bytes;
  signed int var3{234};  // 4 bytes
  unsigned int var4{87}; // 4 bytes

  long long_var1{88};                // 4 or 8 bytes
  long int long_var2{33};            // 4 or 8 bytes
  signed long long_var3{48};         // 4 or 8 bytes
  signed long int long_var4{355};    // 4 or 8 bytes
  unsigned long int long_var5{5657}; // 4 or 8 bytes

  long long long_long1{876};                   // 8 bytes
  long long int long_long_var2{33};            // 8 bytes
  signed long long long_long_var3{48};         // 8 bytes
  signed long long int long_long_var4{355};    // 8 bytes
  unsigned long long int long_long_var5{5657}; // 8 bytes

  return 0;
}

// * Integer Assignment Initialization
/*
! Integers take 4 bites in memory

* Braced initialization
int number{}; // 0
int number{10}; // 10

* Functional initialization
int number(14);

* Assignment initialization
int number = 17;
*/