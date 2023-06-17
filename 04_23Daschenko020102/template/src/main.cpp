#include <iostream>
#include <vector>

int main() {
    char sequence_data[] = {
            'X', 'W', 'O', 'T', 'Z', 'Y', 'Q', 'V', 'U', 'T', 'Z', 'Y', 'X', 'W', 'O', 'T',
            'Z', 'Y', 'Q', 'V', 'U', 'T', 'S', 'X', 'W', 'V', 'N', 'Z', 'Y', 'X', 'P', 'U', 'T',
            'Z', 'R', 'W', 'V', 'U', 'M', 'Y', 'X', 'W', 'O', 'T', 'Z', 'Y', 'Q', 'V', 'U',
            'T', 'S', 'X', 'W', 'V', 'N', 'Z', 'Y', 'X', 'P', 'U', 'T', 'Z', 'R', 'W', 'V', 'U',
            'M', 'Y', 'X', 'W', 'O', 'T', 'Z', 'Y', 'Q', 'V', 'U', 'T', 'S', 'X', 'W', 'V', 'N',
            'Z', 'Y', 'X', 'P', 'U', 'T', 'Z'
    };
    std::vector<char> sequence(sequence_data, sequence_data + sizeof(sequence_data) / sizeof(sequence_data[0]));

    char inputChar;
    std::cout << "Введіть символ: ";
    std::cin >> inputChar;

    std::vector<int> intervals;

    for (int i = 0; i < sequence.size(); i++) {
        if (sequence[i] == inputChar) {
            int interval = 0;
            for (int j = i + 1; j < sequence.size(); j++) {
                if (sequence[j] == inputChar) {
                    interval = j - i;
                    break;
                }
            }
            intervals.push_back(interval);
        }
    }

    if (intervals.empty()) {
        std::cout << "Символ '" << inputChar << "' не знайдено." << std::endl;
    } else {
        std::cout << "Символ '" << inputChar << "' повторюється з наступними інтервалами: ";
        for (const auto& interval : intervals) {
            std::cout << interval << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
