#include <iostream>
#include <vector>
#include <algorithm>

void findCommonElements(const std::vector<int> &arr1, const std::vector<int> &arr2, std::vector<int> &result) {
    for (const int &element: arr1) {
        if (std::find(arr2.begin(), arr2.end(), element) != arr2.end()) {
            result.push_back(element);
        }
    }
}

void showArray(const std::vector<int> &arr) {
    for (const int &element: arr) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int size = 10;
    std::vector<int> firstArray(size);
    std::vector<int> secondArray(size);
    std::vector<int> thirdArray;


    for (int i = 0; i < size; i++) {
        firstArray[i] = rand() % 10;
        secondArray[i] = rand() % 10;
    }

    std::cout << "FirstArray: ";
    showArray(firstArray);

    std::cout << "SecondArray: ";
    showArray(secondArray);

    findCommonElements(firstArray, secondArray, thirdArray);

    std::cout << "ThirdArray (Common Elements): ";
    showArray(thirdArray);

    return 0;
}
