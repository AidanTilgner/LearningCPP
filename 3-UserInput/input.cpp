#include <iostream>

using std::cin;
using std::cout;

int main() {
  int slices;
  cout << "How many pieces of pizza do you have?: \n"; //  cout is an instance
                                                       //  of ostream
  cin >> slices; //  cin is an instance of istream
  cout << "You have " << slices << " slices of pizza" << std::endl;
  /**
   * Notice how the arrows go in the direction of data flow
   */

  return 0;
}