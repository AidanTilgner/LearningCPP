#include <iostream>

using std::cout;
using std::endl;

int main() {
  int slices = 5;
  /**
   * int is the datatype
   * slices is the variable name
   * = is the assigment operator
   * 5 is the value
   */

  cout << "There are " << slices << " slices of pizza" << endl;
  /**
   * Simply separate by << for concantenation
   * endl is a function that moves onto the next line
   */

  printf("%i\n", slices);
  /**
   * This is another way of outputting content, it is a C function, but works in
   * C++ like a lot of C code does. However, just stick with cout because it's a
   * lot more inuitive in that you don't have to declare the variable type (%i).
   */

  return 0;
}