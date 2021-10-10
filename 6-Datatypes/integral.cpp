#include <climits>
#include <iostream>

int main() {
  short a;
  int b;
  long c;
  long long d;
  //  short <= int <= long <= long long
  unsigned short aa;
  unsigned int bb;
  unsigned long cc;
  unsigned long long dd;

  //  Check size of datatype in bytes(16bits)
  std::cout << sizeof(short) << std::endl;

  //  You can also import the CLIMITS file to check these things
  std::cout << SHRT_MAX << std::endl;

  // ! Always use the datatype that garuntees the number size you'll need as a
  // minimum
  return 0;
}