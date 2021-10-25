#include <fstream>
#include <iostream>
#include <string>
#include <vector>

int main() {
  // Creates an instance of ofstream
  std::ofstream file;
  file.open("test.txt", std::ios::app); // Opens the file in append mode
  // Can do this in one line

  if (file.is_open()) {
    std::cout << "Success" << std::endl;
  }

  std::vector<std::string> names;
  names.push_back("Caleb");
  names.push_back("Amy");
  names.push_back("Susan");

  for (std::string name : names) {
    file << name << std::endl;
  }

  file.close(); // Don't really need to do this but it's good practice
  // This block creates a new file if there isn't one or grabs it if there is

  return 0;
}