#include <string>
#include <iostream>

int main()
{
    std::string answer = "Aidan";
    std::string guess;
    std::cout << "Guess my name: " << std::endl;
    std::cin >> guess;

    int age_answer = 18;
    int age_guess;
    std::cout << "Guess my age: " << std::endl;
    std::cin >> age_guess;

    if(guess == answer && age_guess == age_answer)
    {
        std::cout << "You got it right!\n";
    }
    else
    {
        std::cout << "You got it wrong :(\n";
    }

    /**
     * Logical: &&, ||, !
     * 
     * Comparison: ==, !=, <, >, <=, >=
    */

    return 0;
}