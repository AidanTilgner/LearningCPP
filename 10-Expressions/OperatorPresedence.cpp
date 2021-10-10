#include <iostream>

int main()
{
    int y = 5 + 5;  // Plus operator, this is an expression, there are also "*", "-", "/", and "%"
    std::cout << y << std::endl;

    //  Operator presendence is the order that things get evaluated
    int x = 10 + 4 / 3; // 4/3 happens first
    int z = (10 + 4) / 3; // Use parenthesis to determine order of operations

    //  Associativity
    int a = 10 * 4 * 3; // Now 10*4 will happen first

    //  Basically it's all PEMDAS

    return 0;
}