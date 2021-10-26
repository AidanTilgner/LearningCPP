#include <iostream>


void swap(int &a, int &b)
{ 
    // This doesn't work unless we pass by reference to the memory location
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5;
    int b = 10;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    swap(a, b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    return 0;
}