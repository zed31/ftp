#ifndef _BUFFER_HPP_
#define _BUFFER_HPP_

#include <string>
#include <vector>

class buffer {
    public:
        buffer();
        void addStr(const std::string& line);
    private:
        std::vector<std::string> command_;
};

#endif