#include <cassert>
#include <iostream>
#include "For the Nth Time Lab Header.h"


int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    std::string suffix = number_suffix(n);
    if (suffix.empty()) {
        std::cout << "Invalid, Please enter a positive number.\n";
    }
    else {
        std::cout << "The suffix for " << n << " is \"" << suffix << "\".\n";
    }

    return 0;
}
