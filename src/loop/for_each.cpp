#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};

    /*
    In this loop, 'value' is a copy of each element in the vector.
    Modifying value does not affect the elements in the vector.
    */
    for (int value : vec) {
        std::cout << value << " ";
    }

    return 0;
}