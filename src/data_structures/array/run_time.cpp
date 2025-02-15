#include <iostream>

int main() {
    int size = 5;
    int* arr = new int[size];  // Allocates an array of 5 integers on the heap

    // Initializing elements
    for (int i = 0; i < size; ++i) {
        arr[i] = i + 1;
    }

    // Accessing elements
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }

    // Don't forget to free the allocated memory
    delete[] arr;

    return 0;
}