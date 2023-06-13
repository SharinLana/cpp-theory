#include <iostream>
#include <string>

int main()
{
  int age;
  std::string fullName;

  std::cout << "Enter your full name and age: " << std::endl;
  std::getline(std::cin, fullName); // to get 2 or more words with spaces
  std::cin >> age;

  std::cout << "Hello " << fullName << "! Your age is " << age << " years old " << std::endl;

  std::cerr << "std::cerr output: Something went wrong" << std::endl;
  std::clog << "std::clog output: " << fullName << std::endl;
  return 0;
}