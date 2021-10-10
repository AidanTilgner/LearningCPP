#include <iostream>
#include <string>

int main()
{
    //  Hexadecimal is a base-16 number system
    //  Octal is a base-8 number system

    int number = 30;    // Thirty
    int hexNumber = 0x30;   // Now is hexidecimal, so 3 times 16, so 48
    int octNumber = 030;    // Now is octal, so 3 times 8, so 24
    std::cout << number << std::endl;  
    std::cout << hexNumber << std::endl;  
    std::cout << octNumber << std::endl;  

    //  Can also do
    std::cout << std::hex << number << std::endl;   // 1e where 'e' is 14 and 1 is 1*16
    std::cout << std::oct << number << std::endl;   // 36 where '6' is 6 and 3 is 3*8

    return 0;
}