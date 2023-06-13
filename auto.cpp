#include <iostream>

int main()
{
  // ! auto - when the compiler decides the variable type

  auto var1{12};    // 4 bytes
  auto var2{13.0};  // 8 bytes
  auto var3{14.0f}; // 4 bytes
                    //
  auto var4{15.0l}; // 8 bytes
  auto var5{"e"};   // 8 bytes

  // int modifier suffixes
  auto var6{123u};  // unsigned, 4 bytes
  auto var7{123ul}; // unsigned long, 8 bytes
  auto var8{123ll}; // unsigned long long, 8 bytes

  std::cout << "var1 occupies " << sizeof(var1) << " bytes in memory" << std::endl;
  std::cout << "var2 occupies " << sizeof(var2) << " bytes in memory" << std::endl;
  std::cout << "var3 occupies " << sizeof(var3) << " bytes in memory" << std::endl;
  std::cout << "var4 occupies " << sizeof(var4) << " bytes in memory" << std::endl;
  std::cout << "var5 occupies " << sizeof(var5) << " bytes in memory" << std::endl;
  std::cout << "var6 occupies " << sizeof(var6) << " bytes in memory" << std::endl;
  std::cout << "var7 occupies " << sizeof(var7) << " bytes in memory" << std::endl;
  std::cout << "var8 occupies " << sizeof(var8) << " bytes in memory" << std::endl;

  return 0;
}