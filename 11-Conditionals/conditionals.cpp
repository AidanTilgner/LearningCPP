#include <iostream>

int main()
{
    int age = 17;
    if(age < 13)    // If expression evaluates to true
    {
        std::cout << "You're not old enough\n";
    }
    else            // If expression does not evaluate to true
    {
        std::cout << "You're old enough\n";
    }

    return 0;
}