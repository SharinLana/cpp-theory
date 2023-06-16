// ! https://en.cppreference.com/w/cpp/io/manip

#include <iostream>
#include <iomanip>
#include <ios>

int main()
{
  // ! std::endl
  std::cout << "======== STD::ENDL ========= " << std::endl;

  std::cout << std::endl;
  std::cout << "Hello " << std::endl;
  std::cout << "World! " << std::endl;

  std::cout << std::endl;

  std::cout << "Hello\n";
  std::cout << "World\n";
  std::cout << std::endl;

  // ! std::flush - sends data directly to the terminal without storing in the buffer
  std::cout << "======== STD::FLUSH ========= " << std::endl;

  std::cout << std::endl;

  std::cout << std::endl;

  // ! std::setw - sets width between printed characters/words
  std::cout << "======== STD::SETW ========= " << std::endl;

  int colWidth = 10;
  std::cout << std::endl;
  std::cout << "Hello " << std::setw(colWidth) << "World!" << std::endl; // Hello     World!
  std::cout << std::endl;

  // ! std::right/left/internal - sets data on the specified side
  std::cout << "======== STD::LEFT/RIGHT/INTERNAL ========= " << std::endl;

  std::cout << std::endl;

  std::cout << std::endl;

  // ! std::setfill - fills empty space with a specified sign
  std::cout << "======== STD::SETFILL ========= " << std::endl;

  std::cout << std::endl;
  std::cout << std::left;
  std::cout << std::setfill('-');
  std::cout << std::setw(colWidth) << "LastName " << std::setw(colWidth) << "FirstName " << std::setw(colWidth) << "Ade " << std::setw(colWidth) << std::endl;
  std::cout << std::setw(colWidth) << "Smith " << std::setw(colWidth) << " Helena " << std::setw(colWidth) << " 16 " << std::setw(colWidth) << std::endl;
  std::cout << std::setw(colWidth) << "Brown " << std::setw(colWidth) << " Lily " << std::setw(colWidth) << " 45 " << std::setw(colWidth) << std::endl;
  std::cout << std::setw(colWidth) << "Carrow " << std::setw(colWidth) << " John " << std::setw(colWidth) << " 44 " << std::setw(colWidth) << std::endl;
  std::cout << std::endl;

  /*
  Output:

  Last name First name Ade ------
  Smith ---- Helena -- 16 ------
  Brown ---- Lily ---- 45 ------
  Carrow --- John ---- 44 ------

  */

  // ! std::boolalpha - transforms 0/1 to true or false
  std::cout << "======== STD::BOOLALPHA ========= " << std::endl;

  bool condition1{true};
  bool condition2{false};

  std::cout << std::endl;
  std::cout << std::boolalpha;
  std::cout << "condition1 = " << condition1 << std::endl; // true
  std::cout << "condition2 = " << condition2 << std::endl; // false

  std::cout << std::endl;
  std::cout << std::noboolalpha;
  std::cout << "condition1 = " << condition1 << std::endl; // 1
  std::cout << "condition2 = " << condition2 << std::endl; // 0
  std::cout << std::endl;

  // ! std::showpos - shows + in front of  positive numbers
  std::cout << "======== STD::SHOWPOS ========= " << std::endl;

  int num1{15};
  int num2{-67};

  std::cout << std::endl;
  std::cout << std::showpos;
  std::cout << "num1 = " << num1 << std::endl; // +15
  std::cout << "num2 = " << num2 << std::endl; // -67

  std::cout << std::endl;
  std::cout << std::noshowpos;
  std::cout << "num1 = " << num1 << std::endl; // 15
  std::cout << "num2 = " << num2 << std::endl; // -67
  std::cout << std::endl;

  // ! std::dec/hex/oct - shows data in different bases
  std::cout << "======== STD::SHOWPOS ========= " << std::endl;

  int pos_num{15151515};
  int neg_num{-6724343};
  double double_var{343.56};

  std::cout << std::endl;
  std::cout << "pos_num in different bases" << std::endl;
  std::cout << "pos_num (des): " << std::dec << pos_num << std::endl; // 15151515
  std::cout << "pos_num (hex): " << std::hex << pos_num << std::endl; // e7319b
  std::cout << "pos_num (oct): " << std::oct << pos_num << std::endl; // 71630633

  std::cout << std::endl;
  std::cout << "neg_num in different bases" << std::endl;
  std::cout << "neg_num (des): " << std::dec << neg_num << std::endl; // -6724343
  std::cout << "neg_num (hex): " << std::hex << neg_num << std::endl; // ff996509
  std::cout << "neg_num (oct): " << std::oct << neg_num << std::endl; // 37746262411

  std::cout << std::endl;
  std::cout << "double_var in different bases" << std::endl;
  std::cout << "double_var (des): " << std::dec << double_var << std::endl; // 343.56
  std::cout << "double_var (hex): " << std::hex << double_var << std::endl; // 343.56
  std::cout << "double_var (oct): " << std::oct << double_var << std::endl; // 343.56
  std::cout << std::endl;

  // ! std::showbase - shows the base for integral types
  std::cout << "======== STD::SHOWBASE ========= " << std::endl;

  std::cout << std::endl;
  std::cout << "pos_num (no showbase: default)" << std::endl;
  std::cout << "pos_num (des): " << std::dec << pos_num << std::endl; // 15151515
  std::cout << "pos_num (hex): " << std::hex << pos_num << std::endl; // e7319b
  std::cout << "pos_num (oct): " << std::oct << pos_num << std::endl; // 71630633

  std::cout << std::endl;
  std::cout << "pos_num (showbase)" << std::endl;
  std::cout << std::showbase;
  std::cout << "pos_num (des): " << std::dec << pos_num << std::endl; // 15151515
  std::cout << "pos_num (hex): " << std::hex << pos_num << std::endl; // 0xe7319b
  std::cout << "pos_num (oct): " << std::oct << pos_num << std::endl; // 071630633
  std::cout << std::endl;

  // ! std::uppercase/nouppercase
  std::cout << "======== STD::UPPERCASE ========= " << std::endl;

  std::cout << std::endl;
  std::cout << std::uppercase;
  std::cout << "pos_num (des): " << std::dec << pos_num << std::endl; // 15151515
  std::cout << "pos_num (hex): " << std::hex << pos_num << std::endl; // 0XE7319B
  std::cout << "pos_num (oct): " << std::oct << pos_num << std::endl; // 071630633
  std::cout << std::endl;

  // ! std::scientific/fixed
  std::cout << "======== STD::SCIENTIFIC/FIXED ========= " << std::endl;

  double a{3.14159265358979};
  double b{2006.0};
  double c{1.34e-10};

  std::cout << std::endl;
  std::cout << "double values (scientific)" << std::endl;
  std::cout << std::scientific;
  std::cout << "a: " << a << std::endl; // 3.141593E+00
  std::cout << "b: " << b << std::endl; // 2.006000E+03
  std::cout << "c: " << c << std::endl; // 1.340000E-10

  std::cout << std::endl;
  std::cout << "double values (fixed)" << std::endl;
  std::cout << std::fixed;
  std::cout << "a: " << a << std::endl; // 3.141593
  std::cout << "b: " << b << std::endl; // 2006.000000
  std::cout << "c: " << c << std::endl; // 0.000000 (in the fixed format we can't show a number as low as 1.34e-10)
  std::cout << std::endl;

  // ! std::setprecision()
  std::cout << "======== STD::SETPRECISION() ========= " << std::endl;

  a = 3.14159265358979;
  std::cout << std::endl;
  std::cout << "a (default precision(6)): " << a << std::endl; // 3.141593
  std::cout << std::setprecision(10);
  std::cout << "a (precision(10)): " << a << std::endl; // 3.1415926536
  std::cout << std::setprecision(20);
  std::cout << "a (precision(20)): " << a << std::endl; // .14159265358979000737
  std::cout << std::setprecision(50);
  std::cout << "a (precision(50)): " << a << std::endl; // 3.14159265358979000737349451810587197542190551757812
  // reset precision to default(6)
  std::cout << std::setprecision(6);
  std::cout << "a (default precision)" << a << std::endl; // 3.141593
  std::cout << std::endl;

  // ! std::showpoint/noshowpoint - shows trailing zeros if necessary
  std::cout << "======== STD::SHOWPOINT/NOSHOWPOINT ========= " << std::endl;

  double d{34.1};
  double e{101.99};
  double f{12.0};
  int g{45};

  std::cout << std::endl;
  std::cout << "noshowpoint (default)" << std::endl;
  std::cout << "d: " << d << std::endl; // 34.1
  std::cout << "e: " << e << std::endl; // 101.99
  std::cout << "f: " << f << std::endl; // 12
  std::cout << "g: " << g << std::endl; // 45

  std::cout << std::endl;
  std::cout << "showpoint" << std::endl;
  std::cout << std::showpoint;
  std::cout << "d: " << d << std::endl; // 34.10
  std::cout << "e: " << e << std::endl; // 101.990
  std::cout << "f: " << f << std::endl; // 12.0000
  std::cout << "g: " << g << std::endl; // 45
  std::cout << std::endl;

  return 0;
}