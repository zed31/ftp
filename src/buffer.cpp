#include <iostream>
#include <algorithm>
#include "../include/buffer.hpp"

buffer::buffer() : command_{} {};

void buffer::addStr(const std::string& line) {
    auto it = std::find(command_.begin(), command_.end(), line);
    if (it == command_.end()) {
        std::cout << "'" << line << "'" << " not found in the command" << std::endl;
    }
}