#include <iostream>

int main()
{
  // ! Declaring pointers to char
  char *p_char_var{nullptr};
  char char_var1{'A'};
  p_char_var = &char_var1;

  std::cout << "The value stored in p_char_var is : " << *p_char_var << std::endl; // A

  char char_var2{'B'};
  p_char_var = &char_var2;

  std::cout << "The value stored in p_char_var now is : " << *p_char_var << std::endl; // B

  // ! Initialize with string literal
  char *p_message{"Hello World!"};

  std::cout << "The message is : " << p_message << std::endl;                    // Hello World!
  std::cout << "The value stored at p_message is : " << *p_message << std::endl; // H

  // ! Chars in string literals are constants. Trying to modify them will lead to a disaster!
  // *p_message = 'B';
  // std::cout << "The message is (after modification of the first char to 'B') : " << p_message << std::endl; // ! bus error

  // ! Allow users to modify the string
  char message1[] {"Hello World!"};
  message1[0] = 'B';

  std::cout << "message1 : " << message1 << std::endl; // Bello World!

  return 0;
}