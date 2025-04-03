#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, World!";

    for (char ch : str) {
        std::cout << ch << " ";
    }
    for (size_t i = 0; i < str.size(); ++i) {
        std::cout << str[i] << " ";
    }

    for (std::string::iterator it = str.begin(); it != str.end(); ++it) {
        std::cout << *it << " ";
    }

    for (std::string::const_iterator it = str.cbegin(); it != str.cend(); ++it) {
        std::cout << *it << " ";
    }
    std::for_each(str.begin(), str.end(), [](char ch) {
        std::cout << ch << " ";
    });

    return 0;
}