#include <iostream>

int main()
{
  // ! STACK vs HEAP

  // ! STACK
  // 1. Memory is finite
  // 2. The developer IS NOT in full control of the memory lifetime
  // 3. Lifetime id controlled by the scope mechanism

  // ! HEAP
  // 1. Memory is finite
  // 2. The developer is IN FULL CONTROL of when the memory is allocated and released
  // 3. Lifetime is controlled explicitly by the new and delete operators

  // ! Allocate dynamic memory through new
  int *p_number{nullptr};
  p_number = new int; // Dynamically allocated space for a single int on the heap
  // This memory belongs to our program from now on. The system can't use it for anything else until we return it
  // After this line executes, we'll have a valid memory location allocated.
  // The size of the memory will be equal to the type (in this case - int) the pointer points to.

  *p_number = 77; // wrote into dynamically allocated memory
  std::cout << "Allocate dynamic memory through the new operator" << std::endl;
  std::cout << "*p_number : " << p_number << " - " << *p_number << std::endl; // 0x13ae06cd0 77

  // ! Releasing and Resetting
  delete p_number;
  p_number = nullptr;

  // ! Initialize with 'new' upon pointer declaration
  int *p_number1{new int};     // Memory location contains junk value
  int *p_number2{new int(23)}; // Memory location contains value 23
  int *p_number3{new int{47}}; // Memory location contains value 47

  std::cout << std::endl;
  std::cout << "Initializing with 'new' upon pointer declaration" << std::endl;
  std::cout << "p_number1 : " << p_number1 << " - " << *p_number1 << std::endl; // 0x159606cd0 - 0
  std::cout << "p_number2 : " << p_number2 << " - " << *p_number2 << std::endl; // 0x159606c70 - 23
  std::cout << "p_number3 : " << p_number3 << " - " << *p_number3 << std::endl; // 0x159606c80 - 47

  // Releasing the memory
  delete p_number1;
  p_number1 = nullptr;

  delete p_number2;
  p_number2 = nullptr;

  delete p_number3;
  p_number3 = nullptr;

  // ! NOTE: Calling delete twice on a pointer is BAD! It can lead to undefined behavior or crash

  // Now we can reuse the pointers:
  p_number1 = new int(81);
  std::cout << std::endl;
  std::cout << "Reusing the pointer after a proper deletion" << std::endl;
  std::cout << "p_number1 : " << p_number1 << " - " << *p_number1 << std::endl; // 0x134e06c80 - 81

  return 0;
}