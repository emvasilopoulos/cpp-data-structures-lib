#include <iostream>
#include <vector>
#include <string>  // For std::string and std::to_string

int main() {
    int i = 42;
    std::string s = std::to_string(i);  // Converts 'i' to string and adds it to the vector
    std::cout << s << std::endl;

    return 0;
}