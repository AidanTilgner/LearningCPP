#include <iostream>

int main() {
  //  Quoted literals
  auto x = 5U;
  //  Unsigned interger datatype is assumed, still can't change it to other
  //  things

  auto y = 5ULL;
  //  Unsigned long long i love you:)

  auto z = 5.0;
  //  Double, +F for float +L for long double

  std::cout << x;

  return 0;
}