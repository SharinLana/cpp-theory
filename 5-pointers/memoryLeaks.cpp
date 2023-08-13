#include <iostream>

int main()
{
  // ! Memory leak - when we loose access to the dynamically allocated memory
  int *p_number{new int{19}};

  // should delete and reset here
  int number{88};
  p_number = &number; // or p_number = new int{88}
  // After that, p_number points at address2 but the address1 is still in use by our program
  // But our program has lost access to that memory location
  // Memory has been leaked

  // ! Pointer in local scope

  {
    int *p_number1{new int{15}};
  }
  // Memory with int{15} leaked (it should be released inside of the local scope)
  return 0;
}