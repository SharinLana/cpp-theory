#include <iostream>
#include <string>
#include <cstring>

int main()
{
  // ! C-STRING MANIPULATION

  // ! Length of a string: std::strlen
  std::cout << "Length of a string: std::strlen" << std::endl;
  const char message1[]{"The sky is blue"};
  // Array decays into pointer when we use const char
  const char *message2{"The sky is blue"};

  std::cout << "message1: " << message1 << std::endl;   // The sky is blue
  std::cout << "message2: " << message2 << std::endl;   // The sky is blue
  std::cout << "*message2: " << *message2 << std::endl; // T

  // strlen ignores null character
  std::cout << "strlen(message1): " << std::strlen(message1) << std::endl; // 15
  // sizeof includes the null character
  std::cout << "sizeof(message1): " << sizeof(message1) << std::endl; // 16
  // strlen still works with decayed arrays
  std::cout << "strlen(message2): " << std::strlen(message2) << std::endl; // 15
  // sizeof prints the size of the pointer
  std::cout << "sizeof(message2): " << sizeof(message2) << std::endl; // 8 (size of the pointer)

  std::cout << std::endl;

  // ! Comparing strings: std::strcmp
  std::cout << "Comparing strings: std::strcmp(string1, string2) " << std::endl;
  // Returns negative value if lhs appears before rhs in lexicographical order
  // Zero if lhs and rhs compare equal
  // and Positive value if lhs appears after rhs in lexicographical order
  const char *string_data1{"Alabama"};
  const char *string_data2{"Blabama"};

  // Comparison
  std::cout << "std::strcmp(" << string_data1 << ", " << string_data2 << "): " << std::strcmp(string_data1, string_data2) << std::endl;
  // std::strcmp(Alabama, Blabama): -1

  string_data1 = "Alabama";
  string_data2 = "Alabamb";

  // Comparison
  std::cout << "std::strcmp(" << string_data1 << ", " << string_data2 << "): " << std::strcmp(string_data1, string_data2) << std::endl;
  // std::strcmp(Alabama, Alabamb): -1

  string_data1 = "Alacama";
  string_data2 = "Alabama";

  // Comparison
  std::cout << "std::strcmp(" << string_data1 << ", " << string_data2 << "): " << std::strcmp(string_data1, string_data2) << std::endl;
  // std::strcmp(Alacama, Alabama): 1

  std::cout << std::endl;

  // ! Comparing strings: std::strncmp
  std::cout << "Comparing strings: std::strncmp(string1, string2, size_t count)" << std::endl;
  // Compares n characters in the string
  // Returns: Negative value if lhs appears before rhs in lexicographical order
  // Zero if lhs and rhs compare equal, or if count is zero
  // Positive value if lhs appears after rhs in lexicographical order

  size_t n{3};

  // Comparison
  std::cout << "std::strncmp(" << string_data1 << ", " << string_data2 << ", " << n << "): " << std::strncmp(string_data1, string_data2, n) << std::endl;
  // std::strncmp(Alacama, Alabama, 3): 0 (compared the first 3 chars)

  string_data1 = "aaaia";
  string_data2 = "aaance";

  // Comparison
  std::cout << "std::strncmp(" << string_data1 << ", " << string_data2 << ", " << n << "): " << std::strncmp(string_data1, string_data2, n) << std::endl;
  // std::strncmp(aaaia, aaance, 3): 0 (compared the first 3 chars)

  std::cout << std::endl;

  // ! Find first occurrence: std::strchr
  std::cout << "Find first occurrence: std::strchr" << std::endl;
  // Finds all the characters one by one

  const char *str{"Try not. Do or do not. There is no try."};
  char target = 'T';
  const char *result = str;
  int iterations{};

  while ((result = std::strchr(result, target)) != nullptr)
  {
    std::cout << "Found " << target << " starting at " << result << "'\n";
    // Found T starting at Try not. Do or do not. There is no try.'
    // Found T starting at There is no try.'

    // Increment result, otherwise we''l find target at the same location
    result++;
    iterations++;
  }

  std::cout << "Iterations: " << iterations << std::endl; // 2
  std::cout << std::endl;

  // ! Find last occurrence: std::strrchr
  std::cout << "Find last occurrence: std::strrchr" << std::endl;

  const char *filePath = "dir1\\dir2\\filename";
  const char *output = strrchr(filePath, '\\'); // will find the last \\ in input

  if (output)
  {
    std::cout << output + 1 << std::endl; // + 1 we want to start printing past the character found by strrchr
    // filename
  }

  std::cout << std::endl;

  // ! Join strings: std::strcat
  std::cout << "Concatenation: std::strcat" << std::endl;

  char start[50]{"Hello, "};
  char end[50]{"World!"};

  std::strcat(start, end);
  std::cout << "start is: " << start << std::endl; // Hello, World!

  std::strcat(start, "Goodbye World!");
  std::cout << "start after the second concatenation is: " << start << std::endl; // Hello, World!Goodbye World!

  std::cout << std::endl;

  char *start2 = new char[30]{'B', 'u', 's', 'y', 'a'};
  char *end2 = new char[30]{',', ' ', 'm', 'y', ' ', 'c', 'a', 't'};

  std::strcat(start2, end2);
  std::cout << "start2 after concat is: " << start2 << std::endl;                     // Busya, my cat
  std::cout << "start2 length after concat is: " << std::strlen(start2) << std::endl; // 13

  // ! Join strings: std::strncat
  // Concatenates n characters from src to dest
  // Returns a pointer to the result string
  // signature: char *strncat(char *start, const char *end, std::size_t count)

  std::cout << "Concatenation of n characters from src to dest: std::strncat" << std::endl;

  char dest[50]{"hello, "};
  char src[30]{"good to see you again!"};

  std::cout << "The result is: " << std::strncat(dest, src, 16) << std::endl; // hello, good to see you

  std::cout << std::endl;

  // ! Copy strings: std::strcpy
  // signature: char *strcpy(char *dest, const char *src)
  std::cout << "Copying strings: std::strcpy" << std::endl;

  const char *source = "C++ is a multipurpose programming language";
  char *destination = new char[std::strlen(source) + 1]; // created an empty c-string with a length = source
  // + 1 is for the null character
  // Contains garbage data. Uninitialized

  std::strcpy(destination, source);
  std::cout << "destination is: " << destination << std::endl;                          // C++ is a multipurpose programming language
  std::cout << "sizeof(destination) is: " << sizeof(destination) << std::endl;          // 8
  std::cout << "std:strlen(destination) is: " << std::strlen(destination) << std::endl; // 42

  std::cout << std::endl;

  // ! Copy strings: std::strncpy
  // Copies n characters from src to dest
  // signature: char *strncpy(char *dest, const char *src, std::size_t count)
  std::cout << "Copying n characters from src to dest: std::strcpy" << std::endl;

  const char *src3 = "Hello";
  char dest3[] = {'a', 'b', 'c', 'd', '\0'}; // Have to put the null character if we want to print

  std::cout << "dest3 is: " << dest3 << std::endl;                                      // abcd
  std::cout << "dest3 after copying is: " << std::strncpy(dest3, src3, 5) << std::endl; // Hello

  std::cout << std::endl;

  return 0;
}