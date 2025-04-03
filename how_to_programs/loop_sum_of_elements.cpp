#include <iostream>
#include <vector>
#include <numeric>  // For std::accumulate

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    /*
    std::accumulate iterates over the range [vec.begin(), vec.end()),
    starting with the initial value (0 in this case),
    and adds each element to the running total.
    */
    int sum = std::accumulate(vec.begin(), vec.end(), 0);

    std::cout << "The sum of the elements is: " << sum << std::endl;

    return 0;
}