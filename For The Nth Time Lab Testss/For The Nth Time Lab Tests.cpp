#include "For The Nth Time Lab Header.h"
#include <iostream>
#include <cassert>

int main() {

    assert(number_suffix(-100) == "");
    assert(number_suffix(-1) == "");
    assert(number_suffix(0) == "");

    assert(number_suffix(1) == "st");
    assert(number_suffix(2) == "nd");
    assert(number_suffix(3) == "rd");
    assert(number_suffix(4) == "th");

    assert(number_suffix(12) == "th");
    assert(number_suffix(13) == "th");

    assert(number_suffix(21) == "st");
    assert(number_suffix(22) == "nd");
    assert(number_suffix(23) == "rd");

    assert(number_suffix(101) == "st");
    assert(number_suffix(111) == "th");
    assert(number_suffix(120) == "th");

    std::cout << "All tests passed. \n";

    return 0;
}