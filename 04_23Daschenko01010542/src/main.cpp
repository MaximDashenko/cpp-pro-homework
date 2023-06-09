#include <iostream>

#include "utils.h"
#include "factorial.h"

long calculateAccommodation(int n, int m) {
    return factorial(n) / factorial(n - m);
}

int main() {
    auto n = readInt("Enter numerator");
    auto m = readInt("Enter denominator");
    if (n < m) {
        std::cout << "Error: numerator cannot be less than denominator" << std::endl;
        return -1;
    }
    auto a = calculateAccommodation(n, m);
    std::cout << "  " << a << std::endl;
    return 0;
}