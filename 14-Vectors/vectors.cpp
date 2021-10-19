#include <iostream>
#include <vector> // Have to include this

// You have to declare the datatype as a member of the std namespace
void printVector(std::vector<int> data) {
    data.push_back(12); 
    // This will change the local scope of the function, but nothing outside
    // We can get around this by adding an & memory address operator, which will instead give
    // us the memory address to work with instead of making a copy into our function.

    for (int i = 0; i < data.size(); i++){
        std::cout << data[i] << std::endl;
    }
    // Now we can dynamically find the size of this vector outside of its local scope :)
};

int main() {
  // Creation of vectors
  std::vector<int> data = {1, 2, 3};
  data.push_back(12);
  std::cout << data[3] << std::endl;     // Outputs 12
  std::cout << data.size() << std::endl; // Outputs the size of the vector
  data.pop_back();                       // Removes last element
  std::cout << data.size() << std::endl;

  return 0;
}

