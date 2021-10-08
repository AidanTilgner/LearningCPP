#include <iostream>

int main()
{
    bool x = false;
    //  Means false, can also be truE

    bool y = 0;
    //  This evaluates to false

    bool z = true;
    //  Anything else evaluates to 1

    std::cout << z << std::endl;

    bool cool = true;
    std::cout << std::boolalpha << cool << std::endl;\
    // We can use the boolalpha manipulator to have this show true or false

    return 0;
}