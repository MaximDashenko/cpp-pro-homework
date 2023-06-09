//
// Created by Maxim Dashenko on 09.06.2023.
//

#ifndef CPP_PRO_HOMEWORK_CACLCULATEPROFIT_H
#define CPP_PRO_HOMEWORK_CACLCULATEPROFIT_H

double calculateProfit(double amount, double interestRate, int term, double tax = 0.805) {
    double profit = amount * interestRate / 100 * term / 12 * tax;
    return profit;
}

#endif //CPP_PRO_HOMEWORK_CACLCULATEPROFIT_H