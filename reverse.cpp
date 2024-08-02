#include <iostream>
#include <string>

int main() {
    std::string inputString;

    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    std::string reversedString(inputString.rbegin(), inputString.rend());

    std::cout << "Reversed string: " << reversedString << std::endl;

    return 0;
}

