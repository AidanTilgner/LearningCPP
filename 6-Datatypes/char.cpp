#include <iostream>

int main() {
  char x = 's';
  // For char, we have to use 'single quotes'

  std::cout << (int)x << std::endl;
  //  If we run with (int) it will output it as if it's an integer, the number
  //  is it's ASCII number

  char y = 65;
  //  If we output this, it will show up with whatever ASCII character has the
  //  code of 64

  std::cout << y << std::endl;

  unsigned char z = 129;
  //  This will let us increase the max value in here from 128 to 256 with the
  //  power of no negatives

  std::cout << z << std::endl;
  //  Now you can see we have some funky characters

  return 0;
}