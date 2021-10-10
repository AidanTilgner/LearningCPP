#include <iostream>

int main() {
  bool run = true;

  //  Ternary operators
  run ? std::cout << "true" : std::cout << "false";

  //  Short Circuiting
  run &&std::cout << "Was true";

  return 0;
}