#include "For the Nth Time Lab Header.h"

std::string number_suffix(int n) {
    if (n <= 0) {
        return "";
    }

    int last_two_digits = n % 100;
    int last_digit = n % 10;

    if (last_two_digits >= 11 && last_two_digits <= 13) {
        return "th";
    }

    switch (last_digit) {
    case 1: return "st";
    case 2: return "nd";
    case 3: return "rd";
    default: return "th";
    }
}