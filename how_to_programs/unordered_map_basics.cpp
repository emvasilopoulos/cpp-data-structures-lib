#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    // Define an unordered_map that maps strings to integers
    std::unordered_map<std::string, int> hashMap;

    // Insert elements into the hash map
    hashMap["apple"] = 1;
    hashMap["banana"] = 2;
    hashMap["cherry"] = 3;

    // Access an element by key
    std::cout << "The value associated with 'banana' is: " << hashMap["banana"] << std::endl;
    int bananaValue = hashMap["banana"];

    // Remove an element by key
    hashMap.erase("banana");

    // Check if a key exists
    if (hashMap.find("apple") != hashMap.end()) {
        std::cout << "'apple' exists in the hash map." << std::endl;
    }

    for (const auto &pair : hashMap) {
        std::string key = pair.first;
        int value = pair.second;
        
        std::cout << "key: " << key << " | value: " << value << std::endl;
    }

    return 0;
}