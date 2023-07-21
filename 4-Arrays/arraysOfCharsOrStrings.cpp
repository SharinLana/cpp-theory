#include <iostream>

int main()
{
  // Declare array of strings
  char message[5]{'H', 'e', 'l', 'l', 'o'};

  // Print out the array through looping
  for (auto c : message)
  {
    std::cout << c << std::endl;
  }
  std::cout << std::endl;
  std::cout << "size: " << std::size(message) << std::endl;

  // modify the elements of the char array:
  std::cout << std::endl;
  std::cout << "Modify the char array data" << std::endl;
  std::cout << std::endl;

  message[1] = 'a';

  // Print out the array
  for (auto c : message)
  {
    std::cout << c << std::endl;
  }
  std::cout << std::endl;

  // ! NULL TERMINATION
  // ! If the character array is null terminated, it's called a C-String
  // Without the null termination, the output will contain some garbage data after "hello"
  std::cout << std::endl;
  std::cout << "Modify the char array data" << std::endl;
  std::cout << std::endl;
  // ! Way #1 to use a null terminator:
  char message1[]{'H', 'e', 'l', 'l', 'o', '\0'}; // C-String
  std::cout << "message1: " << message1 << std::endl;
  std::cout << "size: " << std::size(message1) << std::endl;
  std::cout << std::endl;

  // ! Way #2 to use a null terminator:
  char message2[6]{'H', 'e', 'l', 'l', 'o'}; //C-String
  std::cout << "message2: " << message2 << std::endl;
  std::cout << "size: " << std::size(message2) << std::endl;
  std::cout << std::endl;

  // ! Way #3 to use a null terminator (an implicit '\0' character is appended to the end of the string):
  char message3[]{"Hello World!"}; // C-String
  std::cout << "message3: " << message3 << std::endl;
  std::cout << "size: " << std::size(message3) << std::endl;
  std::cout << std::endl;

  // ! C++ will NOT correctly print out an array of numbers using just the array name
  int numbers[] {23, 56, 87, 9};
  std::cout << "numbers: " << numbers << std::endl; // wrong data: 0x16dd031d8
  std::cout << std::endl;

  // ! SIZE OF THE ARRAYS
  std::cout << std::endl;
  std::cout << "Size of the arrays" << std::endl;
  std::cout << std::endl;

  char message4[]{"Hello!"}; // C-String
  std::cout << "message4: " << message4 << std::endl;
  std::cout << "size: " << std::size(message4) << std::endl; // 7 (there is an invisible '\0' character in the array of literal)
  std::cout << std::endl;

  char message5[]{"Hello World how are you doing?"}; // C-String
  std::cout << "message5: " << message5 << std::endl;
  std::cout << "size: " << std::size(message5) << std::endl; // 7 (there is an invisible '\0' character in the array of literal)
  std::cout << std::endl;

  return 0;
}