#include <iostream>
#include <vector>

void printVector(std::vector<int> vec) {
    std::cout << "Vector: [";
    for (int value : vec) {
        std::cout << value << ", ";
    }
    std::cout << "]" << std::endl;
}
int main() {
    std::vector<int> vec = {10, 20, 30, 40, 50};

    printVector(vec);

    return 0;
}