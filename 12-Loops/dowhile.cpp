#include <iostream>

int main()
{
    //  Do while happens at least once
    bool run = true;
    int i = 0;
    do {

        if (i == 10) 
        {
            run = false;
        }

        i++;
        break; //   Breaks the loop and moves on to next thing of code
        continue;   // Go immediately to next iteration

    } while (run);

    return 0;
}