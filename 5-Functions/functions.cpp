#include <iostream>
#include <cmath>

//  Initializing our own function
double power(double, int); //   Declaration of function

int main()
{
    //  A simple example of using a function is with the pow function
    pow(10, 2);
    /**
     * This function takes two integers as arguments, and raises integer 1 by the [integer2]power
    */

    //  You can save the return value of these functions to a variable
    double powerFunc = pow(7, 2);
    //  Now the return value of pow has been saved to the powerFunc variable for use later

    //  Now let's use that function that we made earlier
    double myPower = power(2, 3);   //  This will find 2 cubed
    std::cout << myPower;

    return 0;
}

double power(double base, int exp)
{
    double result = 1;
    for (int i = 0; i < exp; i++)
    {
        result*=base;
    }
    
    return result;
}