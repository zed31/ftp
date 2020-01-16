#include <iostream>
#include "../include/buffer.hpp"

int main(int argc __attribute__((unused)), char **argv __attribute__((unused))) {
    std::cout << "bonjour" << std::endl;
    buffer buff;
    buff.addStr("this is opened");
}