#include <iostream>

int main()
{
  // ! REFERENCES VS POINTERS

  // ! References
  // 1. Do not use dereferencing for reading and writing
  // 2. Once assigned, can't refer to something else
  // 3. Must be initialized at declaration

  // ! Pointers
  // 1. Must go through dereferencing to write/read data
  // 2. Can be changed to point somewhere else
  // 3. Can be declared without initializing (will contain garbage data in this case)

  double double_val{16.87};
  double &ref_to_double_val{double_val};
  double *pointer_to_double_val{&double_val};

  // Reading
  std::cout << "Reading data" << std::endl;
  std::cout << "double_val: " << double_val << std::endl;                         // 16.87
  std::cout << "ref_to_double_val: " << ref_to_double_val << std::endl;           // 16.87
  std::cout << "&ref_to_double_val: " << &ref_to_double_val << std::endl;         // 0x16db7b068
  std::cout << "pointer_to_double_val: " << pointer_to_double_val << std::endl;   // 0x16db7b068
  std::cout << "*pointer_to_double_val: " << *pointer_to_double_val << std::endl; // 16.87
  std::cout << std::endl;

  // Writing through the pointer
  std::cout << "Writing through the pointer" << std::endl;

  *pointer_to_double_val = 55.77;

  std::cout << "double_val: " << double_val << std::endl;                         // 55.77
  std::cout << "ref_to_double_val: " << ref_to_double_val << std::endl;           // 55.77
  std::cout << "&ref_to_double_val: " << &ref_to_double_val << std::endl;         // 0x16db7b068
  std::cout << "pointer_to_double_val: " << pointer_to_double_val << std::endl;   // 0x16db7b068
  std::cout << "*pointer_to_double_val: " << *pointer_to_double_val << std::endl; // 55.77
  std::cout << std::endl;

  // Writing through the reference
  std::cout << "Writing through the reference" << std::endl;

  ref_to_double_val = 98.15;

  std::cout << "double_val: " << double_val << std::endl;                         // 98.15
  std::cout << "ref_to_double_val: " << ref_to_double_val << std::endl;           // 98.15
  std::cout << "&ref_to_double_val: " << &ref_to_double_val << std::endl;         // 0x16db7b068
  std::cout << "pointer_to_double_val: " << pointer_to_double_val << std::endl;   // 0x16db7b068
  std::cout << "*pointer_to_double_val: " << *pointer_to_double_val << std::endl; // 98.15
  std::cout << std::endl;

  // ! Can't make reference refer to something else
  double var1{15.15};
  double var2{89.89};

  double &ref_var1{var1};
  // Attempt to make this reference refer to var2 instead:
  ref_var1 = var2;
  // After that, ref_var1 will be equal to 89
  // But var1 will not be affected.
  // If you change the reference value, it will affect only var1 and ref, not the var2

  // ! A pointer can point to something else:
  pointer_to_double_val = &var2;
  std::cout << "pointer_to_double_val: " << pointer_to_double_val << std::endl;   // 0x16b08f050 (was 0x16db7b068)
  std::cout << "*pointer_to_double_val: " << *pointer_to_double_val << std::endl; // 89.89 (was 98.15)

  return 0;
}