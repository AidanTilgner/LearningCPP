#include <iostream>

struct Rectangle {
    int width;
    int height;
};

double area (double height, double width)
{
    return height * width;
}

double area (double height)
{
    return height * height;
}

int main()
{
    Rectangle rect;
    rect.height = 10;
    rect.width = 5;
    std::cout << area(rect.width, rect.height) << std::endl;

    Rectangle square;
    square.height = 10;
    std::cout << area(square.height) << std::endl;

    return 0;
}