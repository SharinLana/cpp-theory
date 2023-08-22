#include <iostream>
#include <string>

int main()
{
  // ! Declaring and Using std::string
  std::string full_name;                              // empty string
  std::string planet{"Earth. Where the sky is blue"}; // Initialize with string literal
  std::string preferred_planet{planet};               // Initialize with other existing string
  std::string message{"Hello there", 5};              // Initialize with a part of a string literal
  std::string greeting{"Hello World"};
  std::string saying_hello{greeting, 6, 5}; // Start at index 6, take 5 characters

  std::cout << "Declaring and Using std::string" << std::endl;
  std::cout << std::endl;

  std::cout << "full_name: " << full_name << std::endl;               // (empty)
  std::cout << "planet: " << planet << std::endl;                     // Earth. Where the sky is blue
  std::cout << "preferred_planet: " << preferred_planet << std::endl; // Earth. Where the sky is blue
  std::cout << "message: " << message << std::endl;                   // Hello
  std::cout << "greeting: " << greeting << std::endl;                 // Hello World
  std::cout << "saying_hello: " << saying_hello << std::endl;         // World

  return 0;
}