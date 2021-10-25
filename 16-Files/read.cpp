#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::ifstream file("test.txt");
  char firsChar = file.get();
  std::cout << firsChar << std::endl;
  // Takes the first character of the file and prints it.

  std::string firstName;
  getline(file, firstName);
  std::cout << firstName << std::endl;
  std::vector<std::string> names;
  // Takes the remaining line of the file and prints it.

  std::string input;
  while (file >> input) {
    names.push_back(input);
  }

  for (std::string name : names) {
    std::cout << name << std::endl;
  }
  // Get the rest of the lines and prints them

  return 0;
}