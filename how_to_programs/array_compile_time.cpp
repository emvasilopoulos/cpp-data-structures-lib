#include <iostream>

int main() {
    // Size is known at compile time
    int arr[5];  // Declares an array of 5 integers

    // Optionally, you can initialize the array at the time of declaration
    int arr2[5] = {1, 2, 3, 4, 5};  // Initializes the array with 5 elements

    // Accessing and modifying elements
    arr[0] = 10;  // Sets the first element to 10
    std::cout << "First element: " << arr[0] << std::endl;

    return 0;
}