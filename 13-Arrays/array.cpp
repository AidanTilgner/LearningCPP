#include <iostream>

int main() {
  // This is how to initialize an array
  int guesses[20]; // The 20 declares the amount of memory allocated, as in 20
                   // integers

  int size = sizeof guesses; // The size of the array
                             // Sizeof is lost when passed to a function

  return 0;
}