#include <iostream>
#include <regex>
#include <sstream>
#include "KeyEventListener.h"

int main() {
    cae::Event numberEvent, stringEvent;
    cae::KeyEventListener listener(numberEvent, stringEvent);
    std::regex numberRegex("^[0-9]+$");
    std::regex stringRegex("^[A-Za-z]+$");

    std::string line, word;
    std::stringstream ss;
    while (std::getline(std::cin, line)) {
        ss << line;
        while (ss >> word) {
            if (std::regex_match(word, numberRegex)) {
                numberEvent.Raise(cae::NumberEventArgs(std::atoi(word.c_str())));
            }
            if (std::regex_match(word, stringRegex)) {
                stringEvent.Raise(cae::StringEventArgs(word));
            }
        }
        ss.clear();
    }
    return 0;
}
