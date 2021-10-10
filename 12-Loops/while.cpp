#include <iostream>

int main() {
  //  While loop syntax
  bool run = true;
  int iterator = 0;
  while (run) {
    if (iterator == 10) {
      run = false;
    }

    std::cout << iterator << std::endl;

    iterator++;
  }

  return 0;
}