#include <vector>
#include <iostream>
#include "data_structures/heap/heap.h"

// using namespace std; // This way you can skip "std::"

void printVector(std::vector<int> vec) {
    std::cout << "Vector: [";
    for (int value : vec) {
        std::cout << value << ", ";
    }
    std::cout << "]" << std::endl;
}

int main(int argc, char *argv[]) {
    std::vector<int> v = {10, 4, 2, 6, 7, 1, 0, 14, 2, 6, 14};
    manos_practice::HeapType heapType = manos_practice::HeapType::MAX;
    manos_practice::Heap maxHeap = manos_practice::Heap(v, heapType);
    
    maxHeap.add(16);
    maxHeap.printHeap();
}