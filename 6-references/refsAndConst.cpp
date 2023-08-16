#include <iostream>

int main()
{
  int age{27};
  int &ref_to_age{age};

  // ! Non-const references (can be changed)
  std::cout << "Non-const references" << std::endl;
  std::cout << "age: " << age << std::endl;               // 27
  std::cout << "ref_to_age: " << ref_to_age << std::endl; // 27
  std::cout << std::endl;

  ref_to_age = 28;

  std::cout << "After modifying through ref:" << std::endl;
  std::cout << "age: " << age << std::endl;               // 28
  std::cout << "ref_to_age: " << ref_to_age << std::endl; // 28
  std::cout << std::endl;

  // ! Const references (cannot be changed)
  // Const applies to the reference, not to the original variable
  const int &const_ref_to_age{age};

  std::cout << "Const references" << std::endl;
  std::cout << "const_ref_to_age: " << const_ref_to_age << std::endl;

  // const_ref_to_age = 29; // !Compiler error

  return 0;
}