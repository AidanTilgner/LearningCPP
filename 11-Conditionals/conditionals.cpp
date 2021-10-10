#include <iostream>

int main() {
  //  First we have the if/else statement
  int age = 17;
  if (age < 13) // If expression evaluates to true
  {
    std::cout << "You're not old enough\n";
  } else // If expression does not evaluate to true
  {
    std::cout << "You're old enough\n";
  }

  //  Another conditional statement is the Switch Statement
  switch (age) {
  case 17:
    std::cout << "You're right!";
    break;

  case 13:
    std::cout << "No you're 13!";
    break;

  default:
    std::cout << "You're wrong";
    break;

    return 0;
  }