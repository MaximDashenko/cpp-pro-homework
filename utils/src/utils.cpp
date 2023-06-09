//
// Created by Maxim Dashenko on 09.06.2023.
//

#include "utils.h"

#include <iostream>

int readInt(const std::string & message) {
    int in;
    std::cout << message << ": ";
    std::cin >> in;
    return in;
}