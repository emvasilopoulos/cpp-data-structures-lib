#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;

    vec.push_back(10);  // Adds 10 to the vector
    vec.push_back(20);  // Adds 20 to the vector

    vec.insert(vec.begin(), 5);  // Inserts 5 at the beginning of the vector
    
    // emplace_back
    /*
    Consider:
    struct President {
        std::string name;
        std::string country;
        int year;
        President(std::string p_name, std::string p_country, int p_year)
            : name(std::move(p_name)), country(std::move(p_country)), year(p_year) {
            std::cout << "I am being constructed.\n";
        }
    };
    vector<President> vec;
    emplace_back can be used like this:
    vec.emplace_back("Nelson Mandela", "South Africa", 1994); // But personally I don't like it
    instead of:
    vec.push_back(President("Nelson Mandela", "South Africa", 1994));
    */
    vec.emplace_back(30);  // Constructs and adds 30 to the vector

    for (int value : vec) {
        std::cout << value << " ";
    }

    return 0;
}