#include <iostream>

#include "calculateProfit.h"
#include "utils.h"

int main() {
    auto amount = readInt("Enter the deposit amount");
    auto interestRate = readInt("Enter the interest rate");
    auto term = readInt("Enter the duration in months");
    auto tax = readInt("Enter the tax rate (default 0.805)");
    double profit = calculateProfit(amount, interestRate, term, tax);
    std::cout << "Profit: " << profit << std::endl;
    return 0;
}
