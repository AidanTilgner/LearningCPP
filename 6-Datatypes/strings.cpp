#include <iostream>
#include <string>

using std::string;

int main() {
  //  Strings are a class as opposed to a datatype
  string greeting = "hello";
  std::cout << greeting + "there" << std::endl;
  //  This is called concatenation

  string complete_greeting = greeting + " there";
  std::cout << complete_greeting.length() << std::endl;
  //  .length() outputs the length of a string
  //  this is an example of an object method

  //  C strings
  char name[] = "Caleb"; // Array with characters Caleb\0

  std::cin >> greeting;
  std::cout << greeting << std::endl;
  //  This only takes the first word because of the way cin works

  //  This is how you get multiple words of user input
  getline(std::cin, greeting);
  std::cout << greeting << std::endl;

  //  String methods
  std::cout << greeting.size() << std::endl; // Same as length
  std::cout << greeting.append(" this was appended")
            << std::endl; // Appends to the end
  std::cout << greeting.insert(3, "      ")
            << std::endl; // At index 3, we want this string to be there
  std::cout << greeting.erase(3, 2)
            << std::endl; // Erase 2 characters starting at position 2
  greeting.pop_back();    // Removes last character

  return 0;
}