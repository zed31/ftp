#include <iostream>
#include <algorithm>
#include "../include/buffer.hpp"

buffer::buffer() : command_{} {};

int buffer::addStr(const std::string& line) {
    auto it = std::find(command_.begin(), command_.end(), line);
    if (it == command_.end()) {
        std::cout << "'" << line << "'" << " not found in the command" << std::endl;
        return -1;
    }
    workWithCommand(line);
    return 0;
}

void buffer::workWithCommand(const std::string& line) {
    std::cout << "work with the command: " << line << std::endl;
}