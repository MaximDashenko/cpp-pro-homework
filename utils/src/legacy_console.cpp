#include <iostream>

int readInt(const std::string & message) {
    int in;
    std::cout << message << ": ";
    std::cin >> in;
    return in;
}