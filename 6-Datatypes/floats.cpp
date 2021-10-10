#include <float.h>
#include <iostream>

int main() {
  float a = 10.0 / 3; //  Least trustworthy of all
  a = a * 10000000000;
  double b = 77000; //    Also can use 7.4E4 scientific notation
  long double c;

  std::cout << a << std::endl;
  //  Comes out in scientific notation

  std::cout << std::fixed << a << std::endl;
  //  Comes out as a decimal
  //  Notice how the number starts to get innacurate as we go down, that's why
  //  floats aren't trustworthy

  //  So lets find out how many trustworthy digits each datatype can use
  std::cout << FLT_DIG << std::endl;  //  Output: 6
  std::cout << DBL_DIG << std::endl;  //  Output: 15
  std::cout << LDBL_DIG << std::endl; //  Output: 18

  return 0;
}