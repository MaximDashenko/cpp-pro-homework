#include <iostream>
#include <vector>
#include <cctype>

#include "utils.h"

const char sequence_data[] = {
        'X', 'W', 'O', 'T', 'Z', 'Y', 'Q', 'V', 'U', 'T',
        'Z', 'Y', 'X', 'W', 'O', 'T', 'Z', 'Y', 'Q', 'V',
        'U', 'T', 'S', 'X', 'W', 'V', 'N', 'Z', 'Y', 'X',
        'P', 'U', 'T', 'Z', 'R', 'W', 'V', 'U', 'M', 'Y',
        'X', 'W', 'O', 'T', 'Z', 'Y', 'Q', 'V', 'U', 'T',
        'S', 'X', 'W', 'V', 'N', 'Z', 'Y', 'X', 'P', 'U',
        'T', 'Z', 'R', 'W', 'V', 'U', 'M', 'Y', 'X', 'W',
        'O', 'T', 'Z', 'Y', 'Q', 'V', 'U', 'T', 'S', 'X',
        'W', 'V', 'N', 'Z', 'Y', 'X', 'P', 'U', 'T', 'Z',
};

const int sequence_size = sizeof(sequence_data) / sizeof(char);

int main() {
    auto input = cnsl::read<char>("Enter a character");

    std::vector<int> indexes;

    for (int i = 0; i < sequence_size; ++i) {
        if (sequence_data[i] == std::toupper(input)) {
            indexes.push_back(i);
        }
    }

    auto size = indexes.size();

    if (size < 2) {
        cnsl::error_nl("Intervals not found for input symbol");
    } else {
        cnsl::info("Input symbol has next intervals:");
        for (int i = 1; i < size; ++i) {
            int interval = indexes[i] - indexes[i - 1];
            cnsl::info(" " + std::to_string(interval));
        }
    }

    return 0;
}