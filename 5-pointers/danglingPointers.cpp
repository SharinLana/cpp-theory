#include <iostream>

int main()
{
  // ! Dangling pointer - a pointer that doesn't point to a valid memory address.
  // ! Trying to dereference and use a dangling pointer will result in undefined behavior

  // - Uninitialized pointer
  // - Deleted pointer
  // - Multiple pointers pointing to same address

  // ! Case 1: uninitialized pointer
  int *p_number; // dangling uninitialized pointer

  std::cout << std::endl;
  std::cout << "Case 1: Uninitialized Pointer" << std::endl;
  std::cout << "p_number: " << p_number << std::endl; // 0x6d44000186093f10
  // std::cout << "*p_number" << *p_number << std::endl; // ! CRASH!

  // ! Case 2: deleted pointer
  int *p_number1{new int{67}};

  std::cout << std::endl;
  std::cout << "Case 2: Deleted Pointer" << std::endl;

  std::cout << "*p_number1 (before deleting): " << *p_number1 << std::endl; // 67

  delete p_number1;

  std::cout << "*p_number1 (after deleting): " << *p_number1 << std::endl; // 0

  // ! Case 3: Multiple pointers pointing to same address
  int *p_number2{new int{69}};
  int *p_number3{p_number2};

  std::cout << std::endl;
  std::cout << "Case 3: Multiple pointers pointing to same address" << std::endl;

  std::cout << "p_number2 - " << p_number2 << " - " << *p_number2 << std::endl; // p_number2 - 0x11c606cd0 - 69
  std::cout << "p_number3 - " << p_number3 << " - " << *p_number3 << std::endl; // p_number3 - 0x11c606cd0 - 69

  delete p_number2;

  // Now p_number3 points to the deleted memory
  // Dereferencing it will lead to the undefined behavior: Crash / garbage address or whatever
  std::cout << "p_number3 (after deleting p_number2) " << p_number3 << " - " << *p_number3 << std::endl; // 0x11c606cd0 - 0

  // ! SOLUTIONS

  // ? Solution 1: initialize your pointers immediately after declaration
  std::cout << std::endl;
  std::cout << "Solution for the Case 1" << std::endl;
  int *p_number4{new int{56}};

  // Check for the nullptr before use
  if (p_number4)
  {
    std::cout << "*p_number4 :" << *p_number3 << std::endl; // 56
  }

  // ? Solution 2:
  // ? After deleting a pointer, reset it to nullptr to make it clear it doesn't point anywhere
  std::cout << std::endl;
  std::cout << "Solution for the Case 2" << std::endl;
  int *p_number5{new int{57}};

  // Use the pointer however you want
  std::cout << "p_number5 - " << p_number5 << " - " << *p_number5 << std::endl; // p_number5 - 0x11c606c70 - 57

  delete p_number5;
  p_number5 = nullptr;

  // Check for the nullptr before use
  if (p_number5)
  {
    std::cout << "*p_number5 :" << *p_number5 << std::endl; // nothing
  }

  // ? Solution 3:
  // ? For multiple pointers pointing to the same address,
  // ? make sure there's one master pointer that owns memory.
  // ? Other pointers should only be able to dereference when the master pointer is valid
  std::cout << std::endl;
  std::cout << "Solution for the Case 3" << std::endl;

  int *p_number6{new int{178}}; // master pointer
  int *p_number7{p_number6};

  // Use p_number7 only if the master pointer (p_number6) is valid
  if (p_number6)
  {
    std::cout << "p_number7 - " << p_number7 << " - " << *p_number7 << std::endl; // p_number7 - 0x11c606c70 - 178
  }

  delete p_number6;
  p_number6 = nullptr;

  // Use p_number7 only if the master pointer (p_number6) is valid
  if (p_number6)
  {
    std::cout << "p_number7 - " << p_number7 << " - " << *p_number7 << std::endl;
  }
  else
  {
    std::cerr << "WARNING: Trying to use an invalid pointer" << std::endl; // this case worked
  }
  return 0;
}