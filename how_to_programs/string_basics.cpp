#include <string>

int main() {
    // char* is immutable
    char* s = "literal"; // OK with C++03; illegal with C++11 and later
    s[0] = 'x';          // undefined behavior

    // std::string is mutable
    std::string x = "String";
    x[2] = 'a'; // OK
    return 0;
}