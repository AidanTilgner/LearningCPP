#include <cmath>
#include <iostream>

int main() {
  std::cout << sqrt(25) << std::endl;
  //  sqrt calculates the square root

  std::cout << sqrt(-25) << std::endl;
  //  Outputs NaN

  std::cout << pow(9, 999) << std::endl;
  //  Outputs infinity

  std::cout << pow(-9, 999) << std::endl;
  //  Outputs negative infinity

  std::cout << remainder(10, 3.25) << std::endl;
  //  Remainder works when % modulus operator doesn't, similar to fmod()

  std::cout << fmax(25, 23) << std::endl;
  //  Returns highest of 2 arguments given, for smallest number use fmin()

  std::cout << trunc(-1.5) << std::endl;
  //  Output: -1

  std::cout << floor(-1.5) << std::endl;
  //  Output: -2

  std::cout << ceil(1.5) << std::endl;
  //  Output: 2

  std::cout << round(1.5) << std::endl;
  //  Output: 2

  //  For full list check out https://en.cppreference.com/w/cpp/numeric/math

  return 0;
}