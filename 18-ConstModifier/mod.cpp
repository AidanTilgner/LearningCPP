#include <iostream>
#include <vector>


void print_array(int data[], int size)
{
    for (int i = 0; i < size; i++)
    {
        data[i]++; 
        // When you pass an array into a function, it decays to a pointer which means that
        // you're editting the actual location of memory

        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

// If you want to trust that the function will not be able to modify the data, you can use const
void print_const_array(const int data[], int size)
{
    for (int i = 0; i < size; i++)
    {
        //data[i]++; // This will throw an exception since the data is read only
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int data[] = {1, 2, 3};
    print_array(data, 3);

    return 0;
}