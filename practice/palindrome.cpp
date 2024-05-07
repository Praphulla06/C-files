#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    std::string cleanStr;
    std::copy_if(str.begin(), str.end(), std::back_inserter(cleanStr), [](char c) {
        return std::isalnum(c);
    });
    
    std::transform(cleanStr.begin(), cleanStr.end(), cleanStr.begin(), ::tolower);
    
    std::string reversedStr(cleanStr.rbegin(), cleanStr.rend());
    
    return cleanStr == reversedStr;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    
    if (isPalindrome(str)) {
        std::cout << "It's a palindrome!" << std::endl;
    } else {
        std::cout << "It's not a palindrome." << std::endl;
    }
    
    return 0;
}
