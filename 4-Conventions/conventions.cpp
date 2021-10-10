#include <iostream>

using std::cin;
using std::cout;

//  Best resource for core guidlines of C++ is
//  https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines

int main() { //  Whenever you have curly braces, indent everything inside
  {
    //  So that it's obvious what's nested inside of what
  }

  //  C++ is case sensitive
  int slices;
  int slIcEs;
  //  These two are completely different to the computer

  //  C++ compiler ignores whitespace

  cout << "How many pieces of pizza do you have?: \n";
  cin >> slices;
  cout << "You have " << slices << " slices of pizza" << std::endl;

  return 0;
}