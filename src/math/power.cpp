#include <iostream>
#include <cmath>  // Required for std::pow

int main() {
    int num = 5;
    
    int result1 = std::pow(num, 2);  // Raise num to the power of 2
    int result2 = num * num;  // Raise num to the power of 2

    std::cout << num << " squared is " << result1 << std::endl;

    return 0;
}