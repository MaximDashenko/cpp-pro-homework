#ifndef CPP_PRO_HOMEWORK_CONSOLE_H
#define CPP_PRO_HOMEWORK_CONSOLE_H

#include <string>
#include <iostream>

namespace cnsl {

    const std::string ESC = "\033[";
    const std::string RESET = "\033[m";

    enum Color {
        Red = 31,
        Green = 32,
        Blue = 34,
        LightBlue = 96,
    };

    // https://medium.com/@vitorcosta.matias/print-coloured-texts-in-console-a0db6f589138
    // https://stackoverflow.com/questions/4842424/list-of-ansi-color-escape-sequences
    void print(const std::string &message, Color front) {
        std::cout << ESC << 0 << ";" << front << "m" << message << RESET;
    }

    void new_line() {
        std::cout << std::endl;
    }

    template<typename T>
    T read(const std::string &message) {
        T in;
        print(message + ": ", Color::Blue);
        std::cin >> in;
        return in;
    }

    void info(const std::string &message) {
        print(message, Color::LightBlue);
    }

    void error(const std::string &message) {
        print("Error: " + message, Color::Red);
    }

    void info_nl(const std::string &message) {
        info(message);
        new_line();
    }

    void error_nl(const std::string &message) {
        error(message);
        new_line();
    }

    void fail(const std::string &message) {
        error_nl(message);
        exit(-1);
    }

}

#endif //CPP_PRO_HOMEWORK_CONSOLE_H