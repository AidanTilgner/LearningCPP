#include <iostream>

// Overloading is just making multiple versions of the same function
// This swap function swaps integers
void swap (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
// this swap function will swap strings
void swap (std::string &a, std::string &b) {
    std::string temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5;
    int b = 10;
    std::cout << "Before swap: a = " << a << " b = " << b << std::endl;
    swap(a, b);
    std::cout << "After swap: a = " << a << " b = " << b << std::endl;

    std::string c = "Hello";
    std::string d = "World";
    std::cout << "Before swap: c = " << c << " d = " << d << std::endl;
    swap(c, d);
    std::cout << "After swap: c = " << c << " d = " << d << std::endl;

    return 0;
}