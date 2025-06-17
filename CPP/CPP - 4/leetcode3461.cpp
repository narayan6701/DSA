#include <iostream>
#include <string>

void reducer(std::string &s) {
    while (s.length() > 2) {
        std::string alt = "";  // Reset alt each iteration
        for (size_t i = 0; i < s.size() - 1; i++) {
            alt.push_back(((s[i] - '0') + (s[i + 1] - '0')) % 10 + '0');  // Correct character conversion
        }
        s = alt; // Persist changes
    }
}

bool hasSameDigits(std::string s) {
    reducer(s);
    return s[0] == s[1];  // Directly return the comparison
}

int main() {
    std::string input = "34789";
    std::cout << std::boolalpha << hasSameDigits(input) << std::endl; // Output: true
    return 0;
}
