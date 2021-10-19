#include <iostream>
#include <array>

void print_array(std::array<int, 10> data){
    for (int i = 0; i < data.size(); i++){
        std::cout << data[i] << std::endl;
    }
}

int main()
{
    // Standard Template Library arrays are basically just normal arrays but wrapped in an object
    // Combines the best of both worlds by letting you optimize but also use the cool methods
    std::array<int, 10> data = {0, 1, 2, 4, 5, 6, 7, 8, 9, 10};

    print_array(data);

    return 0;
}