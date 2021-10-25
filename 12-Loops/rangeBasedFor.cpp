#include <iostream>
#include <vector>
#include <array>

int main()
{
    // Also works with STL Arrays and Vectors
    int data[] = {1, 2, 3, 4, 5, 6};

    // normal for loop
    std::cout << "Normal for loop: " << std::endl;
    for (int i = 0; i < 6; i++)
    {
        std::cout << data[i] << std::endl;
    };

    // range based for loop
    std::cout << "Ranged based for loop: " << std::endl;
    for(int n : data) // n now equals whichever element we're at in the array
    {
        std::cout << n << std::endl;
    };

    return 0;
}