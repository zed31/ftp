#include <iostream>
#include "../include/buffer.hpp"


void buffer::addStr(const std::string& line) {
    std::cout << line << std::endl;
    content_.push_back(line);
}