#include <iostream> //  Defines cout

using std::cout; // Another way of declaring the namespace and functions in the
                 // namespace

int main() { //  Main function, type = integer
  std::cout << "Hello World 1\n";
  /**
   *  std = namespace, function = cout, avoids naming conflicts
   *  best practice is using the std:: prefix because it avoids naming conflicts
   *  cout is an object, uses the ostream class
   *  << is an operator, works with operands cout and "Hello World"
   *  This is simply a way to output things to the console. Make sure you have a
   * terminal window opened in this directory.
   */

  using namespace std; // Using directive...bad practice, can introduce naming
                       // conflicts
  cout << "Hello World 2\n";
  /**
   * Another way to define a namespace is for a block, like so
   */

  return 0;
}