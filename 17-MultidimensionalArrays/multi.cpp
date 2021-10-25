#include <iostream>
#include <vector>   

int main()
{
    int grades[][3] = { 
        {1, 2, 3}, 
        {4, 5, 6}, 
        {4, 5, 6}, 
    }; // You have to put the second size explicitly
    
    // iterate through each element in grades outputting the result
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            std::cout << grades[row][column] << "\t";
        }
        std::cout << std::endl;
    }

    // Do the same thing with a vector called seats
    std::vector<std::vector<int>> seats = {
        {1, 2, 3},
        {4, 5, 6},
        {4, 5, 6},
    };

    // iterate through each element in seats outputting the result
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            std::cout << seats[row][column] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}