#include <iostream>
// https://en.cppreference.com/w/cpp/header/cctype

int main()
{
  // ! CHARACTER MANIPULATION

  // ! Check if character is alphanumeric (std::isalnum)
  std::cout << "Check if character is alphanumeric (std::isalnum)" << std::endl;
  std::cout << std::endl;

  std::cout << "C is alphanumeric :" << std::isalnum('C') << std::endl; // 1
  std::cout << "^ is alphanumeric :" << std::isalnum('^') << std::endl; // 0

  // Example of usage
  char input_char{'*'};

  if (std::isalnum(input_char))
  {
    std::cout << input_char << " is alphanumeric " << std::endl;
  }
  else
  {
    std::cout << input_char << " is NOT alphanumeric " << std::endl; // * is NOT alphanumeric
  }
  std::cout << std::endl;

  // ! Check if character is alphabetic (std::isalpha)
  std::cout << "Check if character is alphabetic (std::isalpha)" << std::endl;
  std::cout << std::endl;

  std::cout << "C is alphabetic :" << std::isalpha('C') << std::endl; // 1
  std::cout << "^ is alphabetic :" << std::isalpha('^') << std::endl; // 0
  std::cout << "7 is alphabetic :" << std::isalpha('7') << std::endl; // 0
  std::cout << std::endl;

  // ! Check if character is blank (std::isblank)
  std::cout << "Check if character is blank (std::isblank)" << std::endl;
  std::cout << std::endl;

  char message[]{"Hello there. How are you doing? The sun is shining"};
  std::cout << "The message is: " << message << std::endl; // Hello there. How are you doing? The sun is shining

  // Find and print blank index
  int blank_count{};

  for (size_t i{0}; i < std::size(message); i++)
  {
    if (std::isblank(message[i]))
    {
      std::cout << "Found a blank character at the index [" << i << "]" << std::endl;
      blank_count++;
    }
  }
  std::cout << "In total we found " << blank_count << " blank characters" << std::endl;
  // In total we found 9blank characters
  std::cout << std::endl;

  // ! Check if character is lowercase or uppercase: (std::islower and std::isupper)
  std::cout << "Check if character is lowercase or uppercase: (std::islower and std::isupper)" << std::endl;
  std::cout << std::endl;

  char thought[]{"The C++ language is the most used in the world"};
  int lowercase_count{};
  int uppercase_count{};

  std::cout << "Original string: " << thought << std::endl; // The C++ language is the most used in the world

  for (auto c : thought)
  {
    if (std::islower(c))
    {
      std::cout << " " << c;
      // h e l a n g u a g e i s t h e m o s t u s e d i n t h e w o r l d
      lowercase_count++;
    }
    if (std::isupper(c))
    {
      uppercase_count++;
    }
  }
  std::cout << std::endl;
  std::cout << "Found " << lowercase_count << " lowercase characters and " << uppercase_count << " uppercase characters." << std::endl;
  // Found 33 lowercase characters and 2 uppercase characters.
  std::cout << std::endl;

  // ! Check if character is a digit (std::isdigit)
  std::cout << "Check if character is a digit (std::isdigit)" << std::endl;
  std::cout << std::endl;

  std::cout << "Is 'a' a digit? " << std::isdigit('a') << std::endl; // 0
  std::cout << "Is '7' a digit? " << std::isdigit('7') << std::endl; // 1

  std::cout << std::endl;

  // ! Turn a character to lowercase/uppercase (std::tolower() and std::toupper())
  std::cout << "Turn a character to lowercase/uppercase (std::tolower() and std::toupper())" << std::endl;
  std::cout << std::endl;

  char original_str[]{"Home. The feeling of belonging"};
  char new_str[std::size(original_str)]; // empty array with the size == to the original_str

  for (size_t i{0}; i < std::size(original_str); i++)
  {
    new_str[i] = std::toupper(original_str[i]);
  }

  std::cout << "Original string: " << original_str << std::endl; // Home. The feeling of belonging
  std::cout << "Uppercase string: " << new_str << std::endl;     // HOME. THE FEELING OF BELONGING

  // Same way to lowercase
  std::cout << std::endl;
  return 0;
}