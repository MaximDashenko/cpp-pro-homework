#include <iostream>
#include <vector>

int main() {
    std::vector<double> fibonacci = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377};
    std::vector<double> result;

    for (int i = 0; i < fibonacci.size() - 1; i++) {
        double ratio = (fibonacci[i + 1]) / fibonacci[i];
        result.push_back(ratio);
    }

    for (const auto& num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}